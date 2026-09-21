//week03_2_arduino_delay_blink
//用DELAY()來延後 控制
void setup() {
  pinMode(2,INPUT_PULLUP);//第二是按鈕 沒按時拉高 
  //for(int i=3;i<=13;i++)pinMode(i,OUTPUT);
  for(int i=2;i<=13;i++)pinMode(i,OUTPUT);
}

void loop() {
    for(int i=2;i<=7;i++)digitalWrite(i,HIGH);
    for(int i=8;i<=13;i++)digitalWrite(i,LOW);
    delay(300);//延後1秒
    for(int i=2;i<=7;i++)digitalWrite(i,LOW);
    for(int i=8;i<=13;i++)digitalWrite(i,HIGH);
    delay(300);
}
