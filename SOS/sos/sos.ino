int led=5;
int beep=8;
void setup() {
  pinMode(beep,OUTPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    sos();
}
void sos()
{
  for(int a=0;a<3;a++)
  {
  digitalWrite(beep,LOW);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(beep,HIGH);
  digitalWrite(led,LOW);
  delay(200);
  }
  delay(2000);
  for(int b=0;b<3;b++)
  {
  digitalWrite(beep,LOW);
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(beep,HIGH);
  digitalWrite(led,LOW);
  delay(1000);
  }
    for(int b=0;b<3;b++)
  {
  digitalWrite(beep,LOW);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(beep,HIGH);
  digitalWrite(led,LOW);
  delay(200);
  }
  delay(2000);
}