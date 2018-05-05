#Check an image for faces
#Checks an image from Raspberry Pi Camera to see if a face is present

import io
import picamera
import cv2
import numpy

#Can replace stream to get video from another source
stream = io.BytesIO()

with picamera.PiCamera() as camera:
  camera.resolution = (320,420)
  #Change format to 'mjpeg' for grabbing video
  camera.capture(stream,format='jpeg')
  
buff = numpy.fromstring(stream.getvalue(), dtype=numpy.uint8)
image = cv2.imdecode(buff,1)
face_cascade = cv2.CascadeClassifier('/usr/share/opencv/haarcascades/haarcascade_frontalface_alt.xml')
gray = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

#Look for faces
faces = face_cascade.detectMultiScale(gray, 1.1, 5)

print "Found "+str(len(faces))+" face(s)"

#Draw a rectangle around every face, don't need this in final version but helps troubleshooting/testing
for (x,y,w,h) in faces:
    cv2.rectangle(image,(x,y),(x+w,y+h),(255,0,0),2)

#result.jpg will contain picture of rectangles around faces if any found (troubleshooting/testing version only)
cv2.imwrite('result.jpg',image)
