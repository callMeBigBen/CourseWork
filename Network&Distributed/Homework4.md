# Homework4

## p1

a. The datagram system is better, using virtual circuits when there is a router that is not working, you need to re-establish the connection. The datagram system is more "flexible" and the routing table can be updated by a distance vector algorithm or a link state algorithm.

b.The virtual circuit system is better, the virtual circuit is connection-oriented, and the router maintains connection state information, which can provide a fixed capacity for the source-to-destination session.

c. Datagrams will have more traffic control overhead, which is caused by various packet headers in the datagram.

## P6

In a virtual circuit, the routers on each path maintain connection state information.
In the connection-oriented transport layer service, the end system maintains the connection status information. Transport layer services are transported over a connectionless network layer, such as TCP over IP, and the intermediate router does not know that it is maintaining the connection.

## P7

a. No

b. Possible

c. No

## P16

子网 1：128.119.40.64/28
子网 2：128.119.40.80/28
子网 3：128.119.40.96/28
子网 4：128.119.40.112/28

## P32

Reducing the cost does not result in an infinite count because there is no routing loop.
Connecting two nodes is equivalent to reducing the infinite cost to the cost of the link.

