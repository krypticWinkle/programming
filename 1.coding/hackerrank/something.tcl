set n0 [$ns node] # server
set n1 [$ns node] # client 1
set n2 [$ns node] # client 2
set n3 [$ns node] # client 3
set n4 [$ns node] # router 1
set n5 [$ns node] # router 2

$ns duplex-link $n0 $n4 2Mb 100ms DropTail
$ns duplex-link $n0 $n5 2Mb 100ms DropTail
$ns duplex-link $n1 $n4 2Mb 100ms DropTail
$ns duplex-link $n2 $n4 2Mb 100ms DropTail
$ns duplex-link $n3 $n4 2Mb 100ms DropTail
