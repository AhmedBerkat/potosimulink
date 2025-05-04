byte buffer_tx[4];
void setup(){
  Serial.begin(9600);
  
  }
void loop(){
  int potonValue=analogRead(A0);
  byte potonValueLow =potonValue & 0xff;
  byte potonValueHigh =(potonValue>>8) & 0xff;
  Serial.println(potonValue);
  buffer_tx[0]='R';
  buffer_tx[1]='potonValueLow';
  buffer_tx[2]='potonValueHigh';
  buffer_tx[3]='\n';
  Serial.write(buffer_tx ,4);
  delay(100);
  
  }
