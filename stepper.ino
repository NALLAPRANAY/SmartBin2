void write(int a,int b,int c,int d){
  digitalWrite(A,a);
  digitalWrite(B,b);
  digitalWrite(C,c);
  digitalWrite(D,d);
}

void steps(){
write(1,0,0,0);
delayMicroseconds(1000);
write(1,1,0,0);
delayMicroseconds(1000);
write(0,1,0,0);
delayMicroseconds(1000);
write(0,1,1,0);
delayMicroseconds(1000);
write(0,0,1,0);
delayMicroseconds(1000);
write(0,0,1,1);
delayMicroseconds(1000);
write(0,0,0,1);
delayMicroseconds(1000);
write(1,0,0,1);
delayMicroseconds(1000);
  
}
void reverse(){
  write(1,0,0,1);
delayMicroseconds(1000);
write(0,0,0,1);
delayMicroseconds(1000);
write(0,0,1,1);
delayMicroseconds(1000);
write(0,0,1,0);
delayMicroseconds(1000);
write(0,1,1,0);
delayMicroseconds(1000);
write(0,1,0,0);
delayMicroseconds(1000);
write(1,1,0,0);
delayMicroseconds(1000);
write(1,0,0,0);
delayMicroseconds(1000);
  
}
