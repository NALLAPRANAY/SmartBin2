void detect(){
  /*digitalWrite(trigpin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(15);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=(duration/2)/29.1;
  Serial.println("1st sensor");
  Serial.println(distance);*/
  distance=digitalRead(trigpin);
  //Serial.println(distance);
  
  
  
  
}
