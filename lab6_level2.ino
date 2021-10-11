// C++ code
// Emre YILMAZ
// 06.07.2021

int RgbRed = 9; // red led set to pin 9
int RgbBlue = 10; // blue led set to pin 10
int RgbGreen = 11; // green led set to pin 11

int rotationPin = A0; // rotaion pin set to pin A0

// for user input
int userInput = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(RgbRed, OUTPUT);
  pinMode(RgbBlue, OUTPUT);
  pinMode(RgbGreen, OUTPUT);
  pinMode(rotationPin, INPUT);
  Serial.println("Please enter 1 for Red -- 2 for Blue -- 3 for Green");
}

void loop()
{
  
  // gettin user input
  
  
  if(Serial.available() > 0){
    userInput = Serial.read();
    Serial.print("User Input: ");
    Serial.println(userInput, DEC);
    
    
    while(userInput == 49){
      int data = analogRead(rotationPin); // reads the data from A0
      data = map(data, 2, 1021, 0, 255);
      analogWrite(RgbRed, data);
      delay(5);
      if(data == 255){
       break; 
      }
    }
    while(userInput == 50){
      int data = analogRead(rotationPin); // reads the data from A0
      data = map(data, 2, 1021, 0, 255);
      analogWrite(RgbBlue, data);
      delay(5);
      if(data == 255){
       break; 
      }
    }
    while(userInput == 51){
      int data = analogRead(rotationPin); // reads the data from A0
      data = map(data, 2, 1021, 0, 255);
      analogWrite(RgbGreen, data);
      delay(5);
      if(data == 255){
       break; 
      }
    }
    
  }
  
  
  
}
