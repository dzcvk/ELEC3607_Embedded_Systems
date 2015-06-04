void setup()
{
  Serial.begin(9600);
  Serial2.begin(9600);
  REG_USART1_MR |= 2<<14;
}
void loop()
{
  char data[10];
  int i=0;

  Serial2.print("HELLO\n");
  Serial2.flush();
  Serial2.readBytesUntil('\n',data,10);
  Serial.print(data);
  while(1);
}
