#!/bin/bash

#Retrieves the last occupied room
roompath="/home/pi/roominfo"

cat $roompath/last_occupied | tail -n 1 
