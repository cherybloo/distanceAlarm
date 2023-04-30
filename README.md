# Distance Alarm
Just a simple 3 combined modules that works together (Passive Buzzer, Ultrasonic Module, ESP-01s)
#Why ESP-01s?
Because it's so cheap and I don't need so many GPIO pins along the way and I want to experiment a bit by using the GPIO pin inside the ESP-01s.

# How to connect them to Arduino Uno and get into programming mode?
* TX Pin ESP-01s => Arduino Uno TX Pin (TX=GPIO1)
* RX Pin ESP-01s => Arduino Uno RX Pin (RX=GPIO3)
* EN/CH_PD ESP-01s => Arduino Uno 3.3V 
* GPIO0 ESP-01s => Arduino Uno GND
* 3.3V ESP-01s => Arduino Uno 3.3V
* GND ESP-01s => Arduino Uno GND
* RST ESP-01s => (open no connection)
* GPIO2 => (open no connection, can be used as a normal GPIO pin)
With the above setup, plug your ESP-01s Module and Arduino Uno to your laptop/computer to start code something and upload them.

# Before uploading
Just before you hit the upload button, connect the **Reset button from the Arduino Uno to GND**, and don't forget to pray to whoever your God is, that it'll works like a charm. If not, there are some alternatives to do:
* Kick your laptop/computer and try again
* Unplugged the Arduino Uno from your device **while the RESET button still connects to GND**, wait for 1 seconds, plugged it again, and try to upload your code again.
