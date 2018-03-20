#!/bin/bash

start_batman(){
	sudo modprobe batman-adv
	sudo systemctl stop dhcpcd
	sudo systemctl stop ssh
	sleep 2
	sudo ip link set wlan0 down
	sudo ifconfig wlan0 mtu 1532
	sudo iwconfig wlan0 mode ad-hoc
	sudo iwconfig wlan0 essid my-mesh-network
	sudo iwconfig wlan0 ap any
	sudo iwconfig wlan0 channel 8
	sleep 1s
	sudo ip link set wlan0 up
	sleep 1s
	sudo batctl if add wlan0
	sleep 1s
	sudo ifconfig bat0 up
	sleep 5s
	sudo systemctl start dhcpcd
	sudo systemctl start ssh

}

launch_setup(){
	echo "Launching setup"
	/home/pi/Desktop/SHIS_Setup/SHIS_Setup

}
launch_main(){
	echo "Launching main app" 
	/home/pi/Desktop/SHIS/untitled
}	
start_person_recognition(){
	#Start person recognition in background 
	python /home/pi/Desktop/OpenCV.py &	
}

#Start batman
start_batman

#Start person detection
start_person_recognition

if [[ ! -f setupconfig.txt ]]; then
	echo "File does not exist"
	#Create config file, write flag=0 and write host info 
	room="kitchen"
	ipaddr=`hostname -I`
	macaddr=`ifconfig -a | grep ether | awk '{print $2}' | sed -n 1p`
	printf "SETUP_DONE=FALSE\n$room $ipaddr $macaddr" > setupconfig.txt

	#Launch setup GUI 
	echo "Launching setup here" #After setup is done, write SETUP=TRUE to config 
	launch_setup

else #File exists, check flag value to see what to launch 
	echo "File exists"
	setup_status=`cat setupconfig.txt | grep SETUP_DONE= | cut -d "=" -f 2`
	if [[ "$setup_status" == "TRUE" ]]; then
		#Setup has been done 
		echo "Setup done" 
		launch_main 
	else
		launch_setup
	fi
fi

