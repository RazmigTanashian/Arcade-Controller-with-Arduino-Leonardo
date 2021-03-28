- I implemented what I initially set out to implement.(copy paste from original proposal)

	PROJECT PROPOSAL:
I generally don't like the feel of a normal PS4 or Gamecube controller when playing games on my PC.
It's always caused my brother and I some finger pain or wrist stress especially when playing super smash brothers melee(SSBM).
People in the fighting game community have used a fight stick(see here:https://cdn.wccftech.com/wp-content/uploads/2017/07/VS2858_Multi_Arcade_Fight_Stick_Top_RGB_2000_Pix.jpg)
for decades now due to their better hand ergonomics compared to a typical video game controller. 
Fight sticks usually cost around 150-250 dollars. I think making one using the arduino would be extremely cost effective and will also
make the controller customizable to the users needs.

- The project almost completely works. Since the joystick works via buttons, it only takes digital input for movement.
If I wanted to add analog movement(to control walking and running) i'd have to add  a button
modifier to control for that. Fortunately, the controller works appropriatley for all games pre 5th generation consoles.

- I began buy soldering wires to the buttons. Then attaching the joystick
and the buttons to the arduino Leonardo pins and the GND on the breadboard. I figured for game implementation,
I should go through keyboartd emulation so it can be a versatile controller that works with any software that allows for input configuration(every emulator and PC game).
I began researching the Keyboard library that is native to arduino. I chose to use the Keyboard.press function as it perfectly emulates holding down
keys such as when you play andhold down buttons in games.

- The only extra piece of hardware I had to purchase was the arduino Leonardo. I quickly learned at the beginning
of the project that the normal arduino doesn't work because the USB type B can't communicate with the keyboard.

- It probably took me a total of 10-11 hours. 
Soldering the wires took a while as it was my first time.
The code maybe took me another 2-3 hours including researching how the library works, and an extra 2 hours for testing.
and probably 4 hours building the wood casing.

- I wrote all the code for this project myself.




