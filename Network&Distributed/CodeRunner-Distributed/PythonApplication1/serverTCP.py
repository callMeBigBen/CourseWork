
from socket import *
serverPort = 12000
serverSocket = socket(AF_INET, SOCK_STREAM)
#serverSocket.bind(('192.168.31.133',serverPort))
serverSocket.bind(('127.0.0.1',serverPort))
serverSocket.listen(5)

print ("The server is ready to receive")
isRec = False

while True:
	connectionSocket, addr = serverSocket.accept()
	sentence = connectionSocket.recv(1024).decode()
	capitalizedSentence = sentence.upper()
	connectionSocket.send(capitalizedSentence.encode())

connectionSocket.close()
