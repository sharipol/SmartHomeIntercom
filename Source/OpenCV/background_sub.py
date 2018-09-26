#NOT YET IMPLEMENTED, but planned to improve person detection by the end of the term
#This script will use background subtraction to determine if there is a person present, and appropriately update files 
#Based on documentation at https://docs.opencv.org/3.1.0/db/d5c/tutorial_py_bg_subtraction.html and tutorial at 
#https://www.pyimagesearch.com/2015/05/25/basic-motion-detection-and-tracking-with-python-and-opencv/ 

import numpy as np
import cv2
import subprocess

	cap = cv2.VideoCapture('vtest.avi')
    detectShadows = False 
    fgbg = cv2.createBackgroundSubtractorMOG2()
    while(1):
		ret, frame = cap.read()
    
		fgmask = fgbg.apply(frame) 
		cv2.imshow('frame',fgmask)
		k = cv2.waitKey(30) & 0xff
		if k == 27:
			break
#If we reach this point, it means an object exceeding our set threshold of 27 set it off
subprocess.call([sourcepath + 'update_nodes.sh', room, occupants])

cap.release()
cv2.destroyAllWindows()
