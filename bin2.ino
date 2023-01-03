//#include<SoftwareSerial.h>
//SoftwareSerial nodeserial(12,13);
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
#include<Wire.h>
#include<Servo.h>




int trigpin = 9;
int pos;
int trig2=6;
int echo2=7;
int servopin=3;
int buzzer=13;
int duration=0;
int distance=0;
int duration1=0;
int status_lvl=0;
long avrg[3];
int lvl=0;
int status_level=0;
int count=0;

Servo myservo;

void setup(){
  Serial.begin(9600);
  //nodeserial.begin(115200);
  lcd.init();
  lcd.backlight();
  
  
  pinMode(trigpin,INPUT);
  
  pinMode(trig2,OUTPUT);
  pinMode(echo2,INPUT);
  pinMode(buzzer,OUTPUT);
  myservo.attach(servopin);

  
}
void loop()
{ 
  detect();
  op();
  Serial.println(lvl);
  delay(500);

}
