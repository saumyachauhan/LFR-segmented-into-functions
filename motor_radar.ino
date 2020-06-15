void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);   //motor1 input 
pinMode(3,OUTPUT);    // motor1 input 
pinMode(8,OUTPUT);    //motor2 input
pinMode(9,OUTPUT);    // motor2 input
pinMode(11,OUTPUT);    
digitalWrite(11,HIGH);   //5v
pinMode(7,INPUT);        //input from sensor
pinMode(12,OUTPUT);
digitalWrite(12,HIGH);     //5v 
pinMode(11,OUTPUT);    
digitalWrite(11,HIGH);   //5v
pinMode(6,INPUT);        //input from sensor
pinMode(13,OUTPUT);
digitalWrite(13,HIGH);     //5v 


        }

void loop() {
  // put your main code here, to run repeatedly:
  unsigned char s,v; 
s=digitalRead(7);
v=digitalRead(6);

 
 if((s==0) && (v==0))  // not  detecting oobject 
{digitalWrite(2,HIGH);  
digitalWrite(3,LOW);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);

}

else if ((s==1)&&(v==0))
{digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
}

else if ((s==0)&&(v==1))
{digitalWrite(3,LOW);
digitalWrite(2,LOW);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);

}



else if((s==1)&&(v==1))    //detecting object 
{

  digitalWrite(3,LOW);
digitalWrite(2,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
  
  
  
  }}
