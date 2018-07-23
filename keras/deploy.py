
import keras
from keras.models import model_from_json
import json
import numpy as np

with open('model.json', 'r') as f:
    json_string = json.load(f)

model = model_from_json(json_string)
model.load_weights('weights.h5')

x_test = np.random.random((100, 1))

print model.predict(x_test.T)
