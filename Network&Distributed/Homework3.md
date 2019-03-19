# Homework3

## p1

a.

source: random integer A >1024

dest:23

b:

source: random integer B>1024

dest:23

c:

source:23

dest:A

d:

source:23

dest:B

e:

Yes

f:

No



## P15

1500x8/10^9 = 1.2x10^(-5)s   So It takes 1.2x10^(-5)s to send a packet.

util = 0.98 = (0.012n)/30.012  -> n=2451packets

## P27

a: 

seq: 127+80=207. Source port num:302  Dest port num:80

b:

ACK num = 81, source port = 80, dest por = 302

c:

ACK num = 80



## P30

a:

Once timeout being fixed, the senders may possibly timeout ahead of time. So some packets are re-transmitted even they're not lost.

b:

If timeout being estimated, then increasing in buffer size can help increase the throuput. BuT there might be one problem: Queuing delay may be very large, similar to what is shown in Secenario 1. 

 

## P43

Won't be dangerous. The receiver’s receive buffer can hold the entire file.
Also, because there is no loss and acknowledgements are
returned before timers expire, TCP congestion control does not throttle the sender.
However, the process in host A will not continuously pass data to the socket because the
send buffer will quickly fill up. Once the send buffer becomes full, the process will pass
data at an average rate or R << S.

