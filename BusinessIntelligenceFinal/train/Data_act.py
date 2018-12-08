import tensorflow as tf
import numpy as np
import csv
from sklearn.model_selection import LeaveOneOut,KFold

def load_data(x_path='../data/Processed_StudentsPerformance.csv',
              y_path='../data/AverageGradesLevel.txt'):
    data=[]
    level=[]
    print('start loading set.')
    reader_x = csv.reader(open(x_path))
    for row in reader_x:
        data.append(row)
    reader_y = open(y_path, 'rU')
    try:
        for line in reader_y:
            level.append(line)
    finally:
        reader_y.close()


    print('start encoding data')
    y =[]
    a=0
    b=0
    c=0
    d=0
    e=0
    for i in range(len(level)):
        if level[i][0]== 'A' or level[i][0]== 'B' or level[i][0] =='C' or level[i][0]== 'D':
            y.append([1,0])
            # a=a+1
        # elif level[i][0] =='B':
        #     y.append([0,1,0,0,0])
        #     b+=1
        # elif level[i][0] =='C'or level[i][0]== 'D':
        #     y.append([0,1,0])
            # c+=1
        # elif level[i][0] =='D':
        #     y.append([0,0,0,1,0])
        #     d+=1
        elif level[i][0] =='E':
            y.append([0,1])
            # e+=1

            # if level[i][0] == 'A':
            #     y.append([1,0,0,0,0])
            #     a=a+1
            # elif level[i][0] =='B':
            #     y.append([0,1,0,0,0])
            #     b+=1
            # elif level[i][0] =='C':
            #     y.append([0,0,1,0,0])
            #     c+=1
            # elif level[i][0] =='D':
            #     y.append([0,0,0,1,0])
            #     d+=1
            # elif level[i][0] == 'E' :
            #     y.append([0,0,0,0,1])
            #     e+=1

    x = np.array(data,dtype = np.float32)
    y = np.array(y,dtype = np.float32)
    print('x:',x.shape,'y:',y.shape)
    print('a,b,c,d,e')
    print(a,b,c,d,e)
    return x,y


def gen(X_data,y_data,n_splits):
    for train_index, test_index in KFold(n_splits).split(X_data):
        X_train, X_test = X_data[train_index], X_data[test_index]
        y_train, y_test = y_data[train_index], y_data[test_index]
        yield X_train,y_train,X_test,y_test


load_data()