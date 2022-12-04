int level(){
  digitalWrite(trig2,LOW);
  delayMicroseconds(5);
  digitalWrite(trig2,HIGH);
  delayMicroseconds(15);
  digitalWrite(trig2,LOW);
  duration1=pulseIn(echo2,HIGH);
  status_level=(duration1/2)/29.1;
  //Serial.println("2nd sensor");
  //Serial.println(status_lvl);
  return status_level;
}
void op(){
  
  if(distance==LOW and status_lvl>=8){
    lcd.clear();
    I2C();
    while(count<num_of_steps){
      
      steps();
      count++;
      }
      delay(6000);
    count=0;
  while(count<num_of_steps){
    
    reverse();
    count++;
  }
  count=0;
  }
  else if(distance==LOW and status_lvl<8){
    lcd.clear();
    I2C();
    tone(buzzer,1500);
    delay(1000);
    noTone(buzzer);
    delay(1000);
  }
}
