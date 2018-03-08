import io
import picamera
import cv2
import numpy
import subprocess

sourcepath = "/home/pi/" 
cascadespath = "/usr/share/opencv/haarcascades/haarcascade_frontalface_alt.xml" 
stream = io.BytesIO()

room = "kitchen"
occupants = 0
#Camera/resolution options

with picamera.PiCamera() as camera:
    camera.resolution = (320,420)
    camera.capture(stream,format='jpeg')

buff = numpy.fromstring(stream.getvalue(), dtype=numpy.uint8)
image = cv2.imdecode(buff,1)
face_cascade = cv2.CascadeClassifier(cascadespath)
gray = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)
faces = face_cascade.detectMultiScale(gray,1.1,5)

if len(faces) > 0:
    print "Found a face!"
    occupants = str(len(faces))
    subprocess.call([sourcepath + 'update_nodes.sh', room, occupants])

for(x,y,w,h) in faces:
    cv2.rectangle(image,(x,y),(x+w,y+h),(255,0,0),2)

cv2.imwrite('result.jpg',image)

