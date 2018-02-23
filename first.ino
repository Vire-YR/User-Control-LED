int x=13,n,c=0,cycles=0;
int b[10],d[10];
void setup()
{
  Serial.begin(19200);
  pinMode(x,OUTPUT);

  Serial.println("Enter the number of cycles: ");
  while(Serial.available()==0){}
  cycles=Serial.parseInt();
  Serial.println("Enter the number of blinks in each cycle: ");
  while(Serial.available()==0){}
  n=Serial.parseInt();
  
  for(int i=0;i<n;i++)
  {
    Serial.print("Enter time delay of BLINKING No ");
    Serial.print(i+1);
    Serial.println(" : ");
    while(Serial.available()==0){}
    b[i]=Serial.parseInt();
    Serial.print("Enter time delay of NOT BLINKING ");
    Serial.print(i+1);
    Serial.println(" : ");
    while(Serial.available()==0){}
    d[i]=Serial.parseInt();
    }
}

void loop() {
  if(c==cycles)
    exit(0);
    
  Serial.print("Cycle: ");
  Serial.println(++c);
  for(int i=0;i<n;i++)
  {
  digitalWrite(x,HIGH);
  Serial.print("  Blink: ");
  Serial.println(i+1);
  delay(b[i]);
  digitalWrite(x,LOW);
  delay(d[i]);
  }
  Serial.println();
}
