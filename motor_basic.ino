void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(11,OUTPUT);
digitalWrite(11,HIGH);
//pinMode(7,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:


  
digitalWrite(2,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
digitalWrite(5,LOW);
delay(1000);
digitalWrite(3,LOW);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(2,HIGH);
delay(1000);

/*digitalWrite(8,HIGH);
digitalWrite(9,LOW);
delay(1000);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
delay(1000);*/
}




