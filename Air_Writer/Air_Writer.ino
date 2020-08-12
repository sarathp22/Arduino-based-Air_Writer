int l=0,i=0;
int x0,y0,z0,x1,y1,z1,x,y,z;
void setup()
{
 Serial.begin(9600);
 pinMode(13,INPUT);
 pinMode(12,INPUT);
 pinMode(A0,INPUT);
 pinMode(A1,INPUT);
 pinMode(A2,INPUT);
}

void loop()
{
 if(i==0)
  {
    x0=analogRead(A0);
    y0=analogRead(A1);
    z0=analogRead(A2);
    i=1;
  }
  if(digitalRead(13)==HIGH)
  {
    //while(digitalRead(13)==HIGH);
    while(l==0)
    {
      x1=analogRead(A0);
      y1=analogRead(A1);
      z1=analogRead(A2);
      x=x1-x0;
      y=y1-y0;
      z=z1-z0;
 Serial.print("X");
 Serial.print(x); //x-axis
 Serial.print("Y");
 Serial.print(y); //y-axis
 Serial.print("Z");
 Serial.print(z); //z-axis
 Serial.println();
 delay(50);
  delay(3000);
 if(digitalRead(12)==HIGH)
 {
  l=1;
 }
    }  
  }
  l=0;
 
}
