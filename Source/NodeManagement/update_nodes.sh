#!/bin/bash

#update other systems with current node's information
#Purpose: Inform other systems of nodes status, will likely be replaced with other functionality before final product 

roompath="/home/pi/roominfo"
room=$1
host=`hostname`
occupants=$2
current_time=`date '+%H:%M:%S'`
etho0=`ifconfig -a | grep ether`
arr=($eth0)
macaddr=${arr[1]}

echo $room $host $macaddr $occupants $current_time >> $roompath/last_occupied
