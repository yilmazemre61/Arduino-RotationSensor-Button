// C++ code
// Emre YILMAZ
// 06.07.2021

// LED
int RgbRed = 9; // red led set to pin 9
int RgbBlue = 10;// blue led set to pin 10
int RgbGreen = 11; // green led set to pin 11

// button
int button = 2; // button set to pin 3
boolean btn = true;


// Potansiyometre
int rotationPin = A0;// potansiyometre set to pin A0

// to run the code we assign a boolean
boolean start = true;

void setup()
{
  Serial.begin(9600);
  pinMode(RgbRed, OUTPUT);
  pinMode(RgbBlue, OUTPUT);
  pinMode(RgbGreen, OUTPUT);
  pinMode(rotationPin, INPUT);
}

void loop()
{
  int data = analogRead(rotationPin);
  data = map(data,2, 1021, 0, 255);

  
  while(start){
    Serial.println(1);
    delay(1000);
    int data = analogRead(rotationPin); // reads the data from A0
    data = map(data, 2, 1021, 0, 255);
    analogWrite(RgbRed, data);
    delay(5);
    if(digitalRead(button)==HIGH){ // it will change the color
      break;
    }
  }
  while(start){
    Serial.println(2);
    delay(1000);
    int data = analogRead(rotationPin); // reads the data from A0
    data = map(data, 2, 1021, 0, 255);
    analogWrite(RgbBlue, data);
    delay(5); 
    if(digitalRead(button)==HIGH){ // it will change the color
      break;
    }
  }
  while(start){
    Serial.println(3);
    delay(1000);
    int data = analogRead(rotationPin); // reads the data from A0
    data = map(data, 2, 1021, 0, 255);
    analogWrite(RgbGreen, data);
    delay(5);
    if(digitalRead(button)==HIGH){ // it will change the color
      break;
    }
  }

}
