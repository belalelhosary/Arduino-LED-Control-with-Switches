
int red=6,yellow=5,green=11,blue=10;
int switch1=9,switch2=8;
int reading1=0,reading2=0,i;
void setup()
{
  pinMode(i, OUTPUT);
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
}
void loop()
{
  reading1=digitalRead(switch1);
    reading2=digitalRead(switch2);
  if(reading1==1){
    digitalWrite(red,1);
    digitalWrite(yellow,1);}
  else{
   digitalWrite(red,0);
    digitalWrite(yellow,0);
  }
  if(reading2==1){
    digitalWrite(green,1);
    digitalWrite(blue,1);}
   else{
   digitalWrite(green,0);
     digitalWrite(blue,0);}
}