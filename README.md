# ROBOTICS OUTLINE

## ***ROBOTICS  WITH EMBEDDED C PROGRAMMING (working with ATmega 16)***
## TOOLS REQUIRED
* [AT mega16(MICRO CONTROLLER)](https://www.theengineeringprojects.com/wp-content/uploads/2018/06/introduction-to-atmega16-5-1.png)
* [IC L293D(TYPICAL MOTOR DRIVER IC)](https://potentiallabs.com/cart/image/cache/catalog/L293D_1-800x800.jpg)
* [6 PIN RMC CABLE](https://rarecomponents.com/store/image/cache/data/8Pin_Relimate_Connector_Female_Female-500x500.jpg)
* [USBasp PROGRAMMER](https://www.fischl.de/usbasp/bilder/usbasp_print.jpg)
* [IR SENSORS](https://images-na.ssl-images-amazon.com/images/I/61gbfMxD%2BrL._SX342_.jpg)
* [2-MOTORS](https://basicrobotics.files.wordpress.com/2010/04/dcmotor.jpg)
* [CHASSIS](https://www.electroncomponents.com/image/cache/data/robot/2-motor-chassis-robotic-arduino-raspberry-pi-EC-500x500.jpg)
## SOFTWARES REQUIRED
* zadig-2.4
* WinAVR-20100110-install
* pn(Programmers notepad)
* AVR8_Burn-O-Mat_2_1_2_setup(Optional)
* Terminal

### Installing Zadig-2.4
Download Zadig-2.4 from the link  [Link to download Zadig-2.4](https://github.com/pbatard/libwdi/releases/download/b721/zadig-2.4.exe)
### Setting up Zadig-2.4
Open the Zadig-2.4 setup file  [Further info](https://rayshobby.net/wordpress/wp-content/uploads/2014/10/zadig_srceenshot.png)
### Installing WinAVR-20100110
Download WinAVR-20100110-install from the link  [Link to download WinAVR-20100110](https://sourceforge.net/projects/winavr/files/WinAVR/20100110/WinAVR-20100110-install.exe/download)
### Setting up WinAVR-20100110
Open the WinAVR-20100110 setup file  [Help1 ](https://cdn.instructables.com/FPU/L6JT/J6QQUH5F/FPUL6JTJ6QQUH5F.LARGE.jpg?auto=webp&width=1024&fit=bounds)[Help2](https://cdn.instructables.com/FPU/L6JT/J6QQUH5F/FPUL6JTJ6QQUH5F.LARGE.jpg?auto=webp&width=1024&fit=bounds)
### Installing Programmers notepad
Download Programmers notepad from the link  [Link to download Programmers notepad](https://github.com/simonsteele/pn/releases/download/v2.4.2/pn2421440_multilang.exe)
### Setting up Programmers notepad
Open the Programmers notepad setup file  [Help](http://csc.ucdavis.edu/~chaos/courses/clab/Software/Windows/mapcode.gif)
# **GETTING STARTED WITH**
- [X] Setting up Zadig-2.4(libusb-win32(v1.2.6.0))
- [X] Setting up WinAVR-20100110
- [X] Installing Programmers notepad
## SIMPLE LINE FOLLOWER
### DESCRIPTION
  - [X] Forward
  - [X] Reverse
  - [X] Right
  - [X] Left
  - [ ] Beep at marker
  - [ ] Delay
### INPUT PART IN ATmega 16
  - [X] DDRA(PART A)
  - [ ] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### OUTPUT PART IN ATmega 16
  - [ ] DDRA(PART A)
  - [X] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### IR SENSORS AND RMC CABLES
  - [X] IR sensors & RMC cable P[0]
  - [X] IR sensors & RMC cable P[1]
  - [ ] IR sensors & RMC cable P[2]
  - [ ] IR sensors & RMC cable P[3]
## LINE FOLLOWER WITH BEEP
### DESCRIPTION
  - [X] Forward
  - [X] Reverse
  - [X] Right
  - [X] Left
  - [X] Beep at marker
  - [ ] Delay
### INPUT PART IN ATmega 16
  - [X] DDRA(PART A)
  - [ ] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### OUTPUT PART IN ATmega 16
  - [ ] DDRA(PART A)
  - [X] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### IR SENSORS AND RMC CABLES
  - [X] IR sensors & RMC cable P[0]
  - [X] IR sensors & RMC cable P[1]
  - [ ] IR sensors & RMC cable P[2]
  - [ ] IR sensors & RMC cable P[3]
## OBSTACLE DETECTOR
### DESCRIPTION
  - [X] Forward
  - [X] Reverse
  - [X] Right
  - [X] Left
  - [ ] Beep at marker
  - [X] Delay
### INPUT PART IN ATmega 16
  - [X] DDRA(PART A)
  - [ ] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### OUTPUT PART IN ATmega 16
  - [ ] DDRA(PART A)
  - [X] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### IR SENSORS AND RMC CABLES
  - [X] IR sensors & RMC cable P[0]
  - [X] IR sensors & RMC cable P[1]
  - [X] IR sensors & RMC cable P[2]
  - [ ] IR sensors & RMC cable P[3]
## TABLE TOP ROBOT
### DESCRIPTION
  - [X] Forward
  - [X] Reverse
  - [X] Right
  - [X] Left
  - [ ] Beep at marker
  - [X] Delay
### INPUT PART IN ATmega 16
  - [X] DDRA(PART A)
  - [ ] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### OUTPUT PART IN ATmega 16
  - [ ] DDRA(PART A)
  - [X] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### IR SENSORS AND RMC CABLES
  - [X] IR sensors & RMC cable P[0]
  - [X] IR sensors & RMC cable P[1]
  - [X] IR sensors & RMC cable P[2]
  - [X] IR sensors & RMC cable P[3]
## SPEED CONTROL ROBOT
### DESCRIPTION
  - [X] Forward
  - [X] Reverse
  - [X] Right
  - [X] Left
  - [ ] Beep at marker
  - [X] Delay
### INPUT PART IN ATmega 16
  - [X] DDRA(PART A)
  - [ ] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### OUTPUT PART IN ATmega 16
  - [ ] DDRA(PART A)
  - [X] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
### IR SENSORS AND RMC CABLES
  - [ ] IR sensors & RMC cable P[0]
  - [ ] IR sensors & RMC cable P[1]
  - [ ] IR sensors & RMC cable P[2]
  - [ ] IR sensors & RMC cable P[3]
