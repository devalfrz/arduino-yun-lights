# arduino-yun-lights
Simple Arduino Yún light control application

<img src="http://behuns.com/media/arduino-yun-lights/icon-touch.png" alt="Arduino Yun Icon">

## Features
- Remotely turns on or off a pin in the Arduino Yún
- Shows the actual state using AJAX (and zepto.js)
- Simple and with a little bit of design.

## Installation

Get the packacge
```
git clone https://github.com/devalfrz/arduino-yun-lights
```
Or simply download the package from github: <a href="https://github.com/devalfrz/arduino-yun-lights/archive/master.zip">https://github.com/devalfrz/arduino-yun-lights/archive/master.zip</a>.

Inside the "Lights" directory you can find the ```lights.ino``` arduino sketch. Load it to the Arduino.

For the next step you need to know the IP address of your Arduino Yún or use the default DNS arduino.local. Yoy can do this by following this guide: https://www.arduino.cc/en/Guide/ArduinoYun

Using a ftp file browser connect to your arduino and copy the contents of ```www``` inside of the ```/www``` directory. It should look like this: ```/www/lights```

Finally connect to your Arduino on a web page using the ip:
(In my case)
```
http://192.168.1.67/lights
```
Or use the DNS
```
http://arduino.local/lights
```
You should see something like this:

<img src="http://behuns.com/media/arduino-yun-lights/states.png" alt="Arduino Yún lights states">

In Android you can add the icon to your home-screen for easy access:
<br>
<img src="http://behuns.com/media/arduino-yun-lights/icon.png" alt="Android Home Icon">

If you find that the "Arduino is Grumpy" it simply means that you cannot connet to the Arduino. This can be because:
- You are in a different network than your Arduino.
- Your Arduino is not connected to your local network.
- Your phone/computer is not connected to your local network.

<img src="http://behuns.com/media/arduino-yun-lights/grumpy.png" alt="Grumpy Arduino">
