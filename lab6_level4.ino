// C++ code
// Emre YILMAZ
// 06.07.2021

// LED pins
int RgbRed = 9;// red led set to pin 9
int RgbBlue = 10; // blue led set to pin 10
int RgbGreen = 11; // green led set to pin 11

// button pins
int button1 = 2; // button1 set to pin 2
int button2 = 3;  // button2 set to pin 3

// initialization to code
boolean start = true;

// additional
int dt = 100;// delay time for each iteration in the for loop

void setup()
{
  Serial.begin(9600);
  pinMode(RgbRed, OUTPUT);
  pinMode(RgbBlue, OUTPUT);
  pinMode(RgbGreen, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop()
{
  
  while(start){
    if(digitalRead(button1) == HIGH){ // turns on the led 
      // when it is pressed second time it takes the circle to the start piont of red
      // These are to restart the color again but if we want to keep adding all the time
      // we can delete the 3 row and run the program so it will keep adding all the time
      digitalWrite(RgbRed, LOW);
      digitalWrite(RgbBlue, LOW);
      digitalWrite(RgbGreen, LOW);
      Serial.println("RED");
      for(int i=0; i <= 255; i++){
        analogWrite(RgbRed, i);
        delay(dt);
        Serial.println(i);
        if(digitalRead(button2) == HIGH){ // changes the color to blue
          Serial.println("Quit red");
          break;
        }
      }
      Serial.println("BLUE");
      for(int i=0; i <= 255; i++){
        analogWrite(RgbBlue, i);
        delay(dt);
        Serial.println(i);
        if(digitalRead(button2) == HIGH){ // changes the color to green
          Serial.println("Quit Blue");
          break; 
        }
      }
      Serial.println("GREEN");
      for(int i=0; i <= 255; i++){
        analogWrite(RgbGreen, i);
        delay(dt);
        Serial.println(i);
        if(digitalRead(button2) == HIGH){ // stops the cycle
          Serial.println("Quit green");
          break; 
        }
      }      
    }
  }
    
}


