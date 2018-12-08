import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt
import Data_act
# from MLP import MLP
import tensorflow.contrib.eager as tfe



LEARNING_RATE_BASE = 0.003
BATCH_SIZE =50
INPUT_NODE =17
OUTPUT_NODE =2
epoch = 100
TRAIN_STEPS = 1000*(epoch-1)/epoch


LAYER1_NODE = 32
def MLP(input,w1,b1,w2,b2):
    result1 = tf.nn.relu(tf.matmul(input,w1)+b1)
    result2 = tf.nn.relu(tf.matmul(result1,w2)+b2)
    result = tf.nn.softmax(result2)
    return result


# keep_prob = tf.placeholder(tf.float32)
x = tf.placeholder(tf.float32,[None,INPUT_NODE],name ='x-input')
y = tf.placeholder(tf.float32,[None,OUTPUT_NODE],name='y-input')
weight1  = tf.Variable(tf.truncated_normal([INPUT_NODE,LAYER1_NODE],stddev=0.1,dtype=float),name='w1')
biases1 = tf.Variable(tf.truncated_normal([LAYER1_NODE],stddev=0.1,dtype=float),name='b1')
weight2 = tf.Variable(tf.truncated_normal([LAYER1_NODE, OUTPUT_NODE], stddev=0.1, dtype=float),name='w2')
biases2 = tf.Variable(tf.truncated_normal([OUTPUT_NODE], stddev=0.1, dtype=float),name='b2')
output = MLP(x,weight1,biases1,weight2,biases2)

#loss
loss = tf.reduce_mean(tf.reduce_sum(tf.square(output-y),axis=1))
#train_step
train_step = tf.train.GradientDescentOptimizer(LEARNING_RATE_BASE).minimize(loss)
#accuracy
correct_pred = tf.equal(tf.argmax(y,1),tf.argmax(output,1))
accuracy = tf.reduce_mean(tf.cast(correct_pred,tf.float64))

fig = plt.figure()
plt.subplot
x1 = np.arange(0,1000*(epoch-1))
y1 = []
x2 = np.arange(0,1000*(epoch-1))
y2 = []
x3 = np.arange(0,1000)
y3 = []
x4 = np.arange(0,1000)
y4 = []
# steps = 0
train_step_num = 0
test_step_num = 0
acc = 0
f_acc = 0
acc_t = 0
f_acc_t = 0
with tf.Session() as sess:
    init = tf.global_variables_initializer()
    sess.run(init)
    x_all,y_all = Data_act.load_data()
    for j in range(epoch):
        # train_step_num = 0
        # acc = 0
        # f_acc = 0
        # if j==int(epoch/2)-1:
        #     train_step_num = 0
        #     test_step_num = 0
        #     acc = 0
        #     f_acc = 0
        #     acc_t = 0
        #     f_acc_t = 0
        data_obj = Data_act.gen(x_all,y_all,epoch)
        x_train,y_train,x_test,y_test = next(data_obj)
        print(x_train.shape)
        for i in range(int(TRAIN_STEPS)):
            # xs = x[i]
            # ys = y[i]
            train_step.run({
                x: np.reshape(x_train[i],(1,-1)),
                y: np.reshape(y_train[i],(1,-1))
            })
            train_step_num += 1
            # steps+=1
            acc = accuracy.eval({
                x: np.reshape(x_train[i], (1, -1)),
                y: np.reshape(y_train[i], (1, -1))
            })
            c_acc = (acc + f_acc * (train_step_num - 1)) / train_step_num
            y1.append(c_acc)
            f_acc = c_acc
            los = loss.eval({
                x: np.reshape(x_train[i], (1, -1)),
                y: np.reshape(y_train[i], (1, -1))
            })
            y2.append(los)
            out = output.eval({
                x: np.reshape(x_train[i], (1, -1))
            })

            if(i%(epoch-1)==0):
                a = int(i/(epoch-1))
                acc_t = accuracy.eval({
                    x: np.reshape(x_test[a], (1, -1)),
                    y: np.reshape(y_test[a], (1, -1))
                })
                test_step_num+=1
                c_acc_t = (acc_t + f_acc_t * (test_step_num - 1)) / test_step_num
                y3.append(c_acc_t)
                f_acc_t = c_acc_t
                los_t = loss.eval({
                    x: np.reshape(x_test[a], (1, -1)),
                    y: np.reshape(y_test[a], (1, -1))
                })
                y4.append(los_t)
                print('step:',test_step_num,' accuracy on test_set=',c_acc_t)
            if i%20==0:
                print('step: ', train_step_num, ' accuracy on train_set=', c_acc, '   loss=', los)
                print('output:', out)
    saver = tf.train.Saver()
    model_path = "../model/model.ckpt"
    save_path = saver.save(sess, model_path)
plt.subplot(221)
plt.scatter(x1,y1,c='r',marker=".",linewidths="0.01")
plt.title('accuracy on train_set, Learning_rate:'+str(LEARNING_RATE_BASE))
plt.subplot(222)
plt.scatter(x3,y3,c='r',marker=".",linewidths="0.01")
plt.title('accuracy on test_set')
plt.subplot(223)
plt.scatter(x2,y2,c='r',marker=".",linewidths="0.01")
plt.title('train_loss')
plt.subplot(224)
plt.scatter(x4,y4,c='r',marker=".",linewidths="0.01")
plt.title('test_loss')
plt.show()
