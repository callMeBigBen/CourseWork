from sklearn.tree import DecisionTreeClassifier
import Data_act_tree
from sklearn.model_selection import LeaveOneOut,KFold

from sklearn.model_selection import train_test_split
x,y = Data_act_tree.load_data()

X_train,X_test,y_train,y_test = train_test_split(x,y,test_size=0.01,random_state =0)
tree = DecisionTreeClassifier()
tree.fit(X_train,y_train)
print("Acc on train: ",tree.score(X_train,y_train) )
print("Acc on test: ",tree.score(X_test,y_test) )