
//Motor L298N
const byte avantM1=8;//Right
const byte arriereM1=9;
const byte vitesseM1=10;
const byte avantM2=6;//Lift
const byte arrierM2=7;
const byte vitesseM2=5;
int Speed = 150;
void setup (){
  //Moteur L298N 
  pinMode(vitesseM1,OUTPUT);
  pinMode(vitesseM2,OUTPUT);
  pinMode(avantM1,OUTPUT);
  pinMode(arriereM1,OUTPUT);
  pinMode(avantM2,OUTPUT);
  pinMode(arrierM2,OUTPUT);
  
  Serial.begin(9600);
}


void loop(){
//Forward 
analogWrite(vitesseM1,Speed);//Speed
digitalWrite(arriereM1,LOW);  
digitalWrite(avantM1,HIGH);

analogWrite(vitesseM2,Speed);
digitalWrite(arrierM2,LOW);  
digitalWrite(avantM2,HIGH);
delay(2000);

//Right
analogWrite(vitesseM1,Speed);
digitalWrite(arriereM1,HIGH);  
digitalWrite(avantM1,LOW);

analogWrite(vitesseM2,Speed);
digitalWrite(arrierM2,LOW);  
digitalWrite(avantM2,HIGH);
delay(2000);

//Lift 

analogWrite(vitesseM1,Speed);
digitalWrite(arriereM1,LOW);  
digitalWrite(avantM1,HIGH);

analogWrite(vitesseM2,Speed);
digitalWrite(arrierM2,HIGH);  
digitalWrite(avantM2,LOW);
delay(2000);
     
//Backward

analogWrite(vitesseM1,Speed);
digitalWrite(arriereM1,HIGH);  
digitalWrite(avantM1,LOW);

analogWrite(vitesseM2,Speed);
digitalWrite(arrierM2,HIGH);  
digitalWrite(avantM2,LOW);
delay(2000);

//Stop
digitalWrite(arriereM1,LOW);
digitalWrite(avantM1,LOW);
digitalWrite(arrierM2,LOW);  
digitalWrite(avantM2,LOW); 
delay(1000);  
}
