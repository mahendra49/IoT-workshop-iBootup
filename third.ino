int x;
void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
Serial.begin(115200);
pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

x=digitalRead(4);
if(x==1)
{
  digitalWrite(13,HIGH);
  Serial.print("0N");
  }
  else
  {
     digitalWrite(13,LOW);
  Serial.print("OFF");
    }
}
