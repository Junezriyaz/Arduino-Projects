
String readString;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()){
  delay(3);
  char c = Serial.read();
  readString+=c;
}

if(readString.length() >0)
{
  Serial.println(readString);
  if(readString == "turn on")
  {
  digitalWrite(6, HIGH);
  }
 else if(readString == "turn off")
  {
  digitalWrite(6, LOW);
  }
  readString = "";
}
}

