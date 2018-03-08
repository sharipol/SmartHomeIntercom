#!/bin/bash

#When called this script will update file and share with other hosts
roompath="/home/pi/roominfo"
room=$1
host=`hostname`
occupants=$2
current_time=`date '+%H:%M:%S'`

echo $room $host $occupants $current_time >> $roompath/last_occupied
