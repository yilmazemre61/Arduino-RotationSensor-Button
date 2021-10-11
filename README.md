# Arduino-RotationSensor-Button
Level-2-- Map the brightness of the green channel of the RGB led to the rotation sensor A0. As you rotate clockwise the light will get brighter.
Level-3-- Write a program that allows the user to set the brightness of each of the RGB channels by using the rotation dial to control brightness and a push button to select the channel. For example, the operation of this program could be as follows.
User turns the dial to set the brightness of the red LED. The User pushes the “mode” button SW1 (D2)
User turns the dial to set the brightness of the green LED. The User pushes the “mode” button SW1 (D2)
User turns the dial to set the brightness of the blue LED.
If the user pushed the “mode” button again, then the it will loop back to the red channel again.
Note: The lights should stay on as you move from one colour to the next. The goal is to be able to make any colour.
Level-4-- Modify the code from level three to incorporate a second button instead of a rotation sensor to increase the LED's brightness. When you press the second button the light will start increasing in brightness until you press the button again to stop it. The first button will still switch between colours. You can modify the program with additional functionality as you see fit. (exLif it hits 255 then goes back to zero, or when it hits 255 it stays there, or when it hits 255 is starts decreasing) all are good options.

