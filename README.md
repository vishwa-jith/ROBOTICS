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
## Steps to be followed....to setup Makefile...
* Open the WinAVR directory and open [MakeFile](http://www.indianbeantree.co.uk/wiki/images/f/f1/MFstep01.png) application or by searching...[continue](http://www.indianbeantree.co.uk/wiki/images/9/9b/MFstep02.png).
* Select **[MCU_type](http://www.indianbeantree.co.uk/wiki/images/0/0d/MFstep06.png)** in Makefile bar and set **ATmega 16** as MCU_type.
* Select **[Enabe Editing in Makefile](http://www.indianbeantree.co.uk/wiki/images/c/c8/MFstep12.png)** in Makefile bar.
* Search for **[AVRDUDE_PROGRAMMER](http://www.indianbeantree.co.uk/wiki/images/8/88/MFstep09.png)** in the Makefile and change it to **usblib**.
* Select **[Port](http://www.indianbeantree.co.uk/wiki/images/0/01/MFstep10.png)** in Makefile bar and set **usb** as Port.
* Search for **[F_MCU](http://www.indianbeantree.co.uk/wiki/images/4/43/MFstep14.png)** in the Makefile and change it to **8000000** (Freedom of control unit is 8000000 in ATmega 16).
* Save the Makefile in a new folder and continue programming in the folder where the Make file is placed at.
* Set the Target before compliation of the program [Main file name...](http://www.indianbeantree.co.uk/wiki/images/7/7a/MFstep03.png).
# **GETTING STARTED WITH**
- [X] Setting up Zadig-2.4(libusb-win32(v1.2.6.0))
- [X] Setting up WinAVR-20100110
- [X] Installing Programmers notepad
- [X] Making the setup MakeFile
## [SIMPLE LINE FOLLOWER](http://www.legoengineering.com/wp-content/uploads/2015/01/image004.jpg)
### NUMBER OF CASES = 4
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
  - [ ] UART REGISTER
  - [ ] ADC REGISTER
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
### NUMBER OF CASES MOTION = 5
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
  - [ ] UART REGISTER
  - [ ] ADC REGISTER
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
## OBSTACLE AVOIDER ROBOT
### NUMBER OF CASES = 2^3 = 8
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
  - [ ] UART REGISTER
  - [ ] ADC REGISTER
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
### NUMBER OF CASES = 13 (2^NUMBER OF SENSORS) = 2^4 = 16 (ONLY 13 CASES ARE VALID ON A TABLE)
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
  - [ ] UART REGISTER
  - [ ] ADC REGISTER
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
### NUMBER OF CASES = 8
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
  - [ ] UART REGISTER
  - [X] ADC REGISTER
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
## PC CONTROL ROBOT
### NUMBER OF CASES = 2^2 =4
### DESCRIPTION
  - [X] Forward = w
  - [X] Reverse = s
  - [X] Right = d
  - [X] Left = a
  - [ ] Beep at marker
  - [ ] Delay
### INPUT PART IN ATmega 16
  - [ ] DDRA(PART A)
  - [ ] DDRB(PART B)
  - [ ] DDRC(PART C)
  - [ ] DDRD(PART D)
  - [X] UART REGISTER
  - [ ] ADC REGISTER
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
