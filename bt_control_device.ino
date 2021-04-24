/* Home Automation With Bluetooth Module*/
char data;

void setup()
{
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while (Serial.available()==0);
  data = Serial.read();
  Serial.println(data);

  if (data=='A')
  digitalWrite(3,HIGH);

  if (data == 'a')
  digitalWrite(3,LOW);

  if (data=='B')
  digitalWrite(4,HIGH);

  if (data=='b')
  digitalWrite(4,LOW);
}

