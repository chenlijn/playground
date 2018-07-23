
import numpy as np
import os
from skimage import io

imgfile = 'test.jpg'
img = io.imread(imgfile)
print img.shape
io.imsave('1.png', img[:,:,0])
io.imsave('2.png', img[:,:,1])
io.imsave('3.png', img[:,:,2])

