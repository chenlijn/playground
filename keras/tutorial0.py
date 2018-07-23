
import keras
from keras.models import Sequential
from keras.layers import Dense, Activation
import numpy as np
import json

model = Sequential()
model.add(Dense(32, activation='relu', input_dim=100))
model.add(Dense(10, activation='softmax'))
model.compile(optimizer='rmsprop', 
              loss='categorical_crossentropy',
              metrics=['accuracy'])



data = np.random.random((1000, 100))
labels = np.random.randint(10, size=(1000, 1))

one_hot_labels = keras.utils.to_categorical(labels, num_classes=10)

model.fit(data, one_hot_labels, epochs=600, batch_size=32)

# save the model and weights 
json_string = model.to_json()
with open('model.json', 'w+') as f:
    json.dump(json_string, f)

model.save_weights('weights.h5')


