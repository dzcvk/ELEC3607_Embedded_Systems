void setup()
{
  SPI.begin(9600);
}
void loop()
{
  //Serial.print("HELLO");
  REG_UART_MR |= 2<<14;
  Serial2.print("HELLO");
  delay(1000);
  while(Serial2.available()>0)
  {  for(i=0;i<Serial2.available();i++)
    {
     data[i] = Serial2.read();
    }
  }
  REG_UART_MR &= ~(3<<14);
  Serial.print(data[0]);
}
