import tensorflow as tf
sess = tf.Session()

from keras import backend as K
K.set_session(sess)

img = tf.placeholder(tf.float32, shape = (None, 784))

from keras.layers import Dense

x = Dense(128, activation='relu')(img)
x = Dense(128, activation='relu')(x)
preds = Dense(10, activation='softmax')(x)


labels = tf.placeholder(tf.float32, shape=(None, 10))

from keras.objectives import categorical_crossentropy
loss = tf.reduce_mean(categorical_crossentropy(labels, preds))


from tensorflow.examples.tutorials.mnist import input_data
mnist_data = input_data.read_data_sets('MNIST_data', one_hot=True)

train_step = tf.train.GradientDescentOptimizer(0.5).minimize(loss)

init_op = tf.global_variables_initializer()
sess.run(init_op)

with sess.as_default():
    for i in range(1500):
        batch = mnist_data.train.next_batch(50)
        train_step.run(feed_dict={img: batch[0], labels: batch[1], K.learning_phase(): 1})
        loss_ = sess.run([loss], feed_dict = {img: batch[0], labels: batch[1], K.learning_phase(): 0})
        print("loss: ", loss_[0])


# evaluate the model
from keras.metrics import categorical_accuracy as accuracy

acc_value = accuracy(labels, preds)
with sess.as_default():
    print acc_value.eval(feed_dict={img: mnist_data.test.images, labels: mnist_data.test.labels})




