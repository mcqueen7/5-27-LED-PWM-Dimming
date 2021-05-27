// C++ code
//
int  senv=0;
int  ledd=0;
int pwmpin=9;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(pwmpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  senv=analogRead(A0);
  Serial.print("1read=");
  Serial.print(senv);
    Serial.print("   2read=");
  Serial.println(ledd);
  delay(1);
  ledd=map(senv,800,930,0,255);
  if(ledd<0)ledd=0;
  analogWrite(pwmpin,ledd);
  delay(100);
 // digitalWrite(13, HIGH);
 // delay(senv); // Wait for 1000 millisecond(s)
  //digitalWrite(13, LOW);
  //delay(senv); // Wait for 1000 millisecond(s)
}