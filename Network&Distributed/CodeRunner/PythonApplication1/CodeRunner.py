import os
from socket import *
import time
serverPort = 12000
serverSocket = socket(AF_INET, SOCK_STREAM)
#serverSocket.bind(('192.168.31.133',serverPort))
serverSocket.bind(('127.0.0.1',serverPort))
serverSocket.listen(5)

print ("The server is ready to Run Code")


while True:
	connectionSocket, addr = serverSocket.accept()
	sentence = connectionSocket.recv(10000).decode()
	java = open("code.java","w+")
	java.write(sentence)
	java.close()
	toByte = os.popen("javac code.java")
	time.sleep(5)
	run = os.popen("java code")
	result = run.read()+"\n code running finished"
	connectionSocket.send(result.encode())

connectionSocket.close()

