
from socket import *


#serverName = '192.168.31.133'
serverName = '127.0.0.1'
serverPort = 12000
clientSocket = socket(AF_INET, SOCK_STREAM)
clientSocket.connect((serverName, serverPort))

sentence = input("input Java code(full file in string format):")
clientSocket.send(sentence.encode())

modifiedSentence = clientSocket.recv(10000)
print("From Server:", modifiedSentence.decode())

clientSocket.close()

