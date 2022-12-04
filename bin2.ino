//#include<SoftwareSerial.h>
//SoftwareSerial nodeserial(12,13);
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
#include<Wire.h>

#define A 2
#define B 3
#define C 4
#define D 5

int trigpin = 6;
int echopin= 7;
int trig2=8;
int echo2=9;
int buzzer=13;
int duration=0;
int distance=0;
int duration1=0;
int status_lvl=0;
long avrg[3];
int lvl=0;
int status_level=0;
int count=0;
#define num_of_steps    525

void setup(){
  Serial.begin(9600);
  //nodeserial.begin(115200);
  lcd.init();
  lcd.backlight();
  
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(trigpin,INPUT);
  pinMode(echopin,INPUT);
  pinMode(trig2,OUTPUT);
  pinMode(echo2,INPUT);
  pinMode(buzzer,OUTPUT);
}
void loop()
{ 
  detect();
  op();

}
