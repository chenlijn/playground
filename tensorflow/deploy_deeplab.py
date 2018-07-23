
import os
from io import BytesIO
import numpy as np
from PIL import Image
import tensorflow as tf
from tensorflow.core.framework import graph_pb2
from google.protobuf import text_format
import cv2


class DeepLabModel(object):
    """class to load deeplab model and run inference"""

    INPUT_TENSOR_NAME = 'ImageTensor:0'
    OUTPUT_TENSOR_NAME = 'SemanticPredictions:0'
    INPUT_SIZE = 513
    FROZEN_GRAPH_NAME = 'frozen_inference_graph'

    def __init__(self, graph_file, binary_or_not):
        """creates and loads pretrained model"""

        graph_def = graph_pb2.GraphDef()
        with open(graph_file, 'rb') as f:
            if binary_or_not:
                graph_def.ParseFromString(f.read())
            else:
                text_format.Merge(f.read(), graph_def)
        
        tf.import_graph_def(graph_def, name='')
        self.sess = tf.Session()


    def run(self, imagefile):
        image = Image.open(imagefile)
        width, height = image.size
        resize_ratio = 1.0 * self.INPUT_SIZE / max(width, height)
        target_size = (int(resize_ratio * width), int(resize_ratio * height))
        resized_image = image.convert('RGB').resize(target_size, Image.ANTIALIAS)
        batch_seg_map = self.sess.run(self.OUTPUT_TENSOR_NAME, 
                                      feed_dict={self.INPUT_TENSOR_NAME: [np.asarray(resized_image)]})
        seg_map = batch_seg_map[0]
        return resized_image, seg_map



if __name__ == "__main__":

    graph_file = '/var/folders/8b/jlkwddxn2gbfr70m_39m1jyr0000gn/T/tmpplFTrr/deeplabv3_mnv2_pascal_train_aug/frozen_inference_graph.pb'
    pbtxt_file = 'test.pbtxt'
    #test_model = DeepLabModel(graph_file, 1)
    test_model = DeepLabModel(pbtxt_file, 0)
    #imgfile = '/Users/lijianchen/Documents/codes/python_codes/fundus.jpeg'
    imgfile = 'image2.jpg'
    res_img, predict = test_model.run(imgfile)
    res_img.save('res_img.png')
    cv2.imwrite('seg_map.png', predict*255)
    print res_img.size





