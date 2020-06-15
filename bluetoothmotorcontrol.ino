int motorPin1 = 2;
int motorPin2 = 3;
int motorPin3 = 4;
int motorPin4 = 5;
int Electromagnet = 11;
int LED = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(12,OUTPUT);//12v pin of motor driver
  digitalWrite(12,HIGH);
  //digitalWrite(enable,HIGH);
  Serial.begin(9600);
  pinMode(6, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = Serial.read();
  while (Serial.available()) {
    if (x == '0') {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
    }
    else if (x == '1') {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
    }
    else if (x == '2') {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
    }
    else if (x == '3') {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
    }
    else if (x == '4') {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
    }
    else if (x == '5') {
      while (x != '6') {
        digitalWrite(Electromagnet, HIGH);  // turn the Electromagnet on (HIGH is the voltage level)
        digitalWrite(LED, HIGH);
      }
    }
    else if (x == '6') {
      digitalWrite(Electromagnet, LOW);   // turn the Electromagnet off by making the voltage LOW
      digitalWrite(LED, LOW);
    }
  }

}
