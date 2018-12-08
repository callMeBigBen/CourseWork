import tensorflow as tf
import numpy as np
import csv
INPUT_NODE = 17

reader_x = csv.reader(open('../data/Processed_StudentsPerformance.csv'))
data=[]
for row in reader_x:
    data.append(row)
data = data[:5]

x = tf.placeholder(tf.float32,[None,INPUT_NODE],name ='x-input')
sess = tf.Session()
saver = tf.train.import_meta_graph('model.ckpt.meta')
saver.restore(sess,tf.train.latest_checkpoint('./'))
graph = tf.get_default_graph()
w1 = graph.get_tensor_by_name("w1:0")
b1 = graph.get_tensor_by_name("b1:0")
w2 = graph.get_tensor_by_name("w2:0")
b2 = graph.get_tensor_by_name("b2:0")
result1 = tf.nn.relu(tf.matmul(x, w1) + b1)
result2 = tf.nn.relu(tf.matmul(result1, w2) + b2)
output = tf.nn.softmax(result2)
with sess:
    for i in range(len(data)):
        result = sess.run(output, feed_dict={
            x: np.reshape(data[i],(1,-1))})
        print(result)