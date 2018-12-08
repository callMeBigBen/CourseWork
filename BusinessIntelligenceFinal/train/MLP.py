import tensorflow as tf

LAYER1_NODE = 32
def MLP(input,INPUT_NODE,OUTPUT_NODE):
    weight1  = tf.Variable(tf.truncated_normal([INPUT_NODE,LAYER1_NODE],stddev=0.1,dtype=float),name='w1')
    biases1 = tf.Variable(tf.truncated_normal([LAYER1_NODE],stddev=0.1,dtype=float),name='b1')
    weight2 = tf.Variable(tf.truncated_normal([LAYER1_NODE, OUTPUT_NODE], stddev=0.1, dtype=float),name='w2')
    biases2 = tf.Variable(tf.truncated_normal([OUTPUT_NODE], stddev=0.1, dtype=float),name='b2')
    result1 = tf.nn.relu(tf.matmul(input,weight1)+biases1)
    result2 = tf.nn.relu(tf.matmul(result1,weight2)+biases2)
    result = tf.nn.softmax(result2)
    return result