//week06_2_arduino_button_change_mode_led_flow
int mode=0;//0從小變到大 1從大變到小
void setup() {
  pinMode(2,INPUT_PULLUP);
  for(int i=3;i<=13;i++){
    pinMode(i,OUTPUT);
    }
    tone(8,523,100);delay(100);//DO
    tone(8,784,100);delay(100);//MI
}
int prev=HIGH,now=3;
void loop() {
  if(prev==HIGH && digitalRead(2)==LOW){//按下去的瞬間
    if(mode==0)mode=1;//0變1
    else mode=0;//1變0
    prev=LOW;
   }else if(prev==LOW && digitalRead(2)==HIGH){//放開的瞬間
    prev=HIGH;
      }
    if(mode==0){//從小變到大
      now++;
      if(now>13)now=3;//超過範圍變回3
      digitalWrite(now,HIGH);//亮
      delay(100);//等一下
      digitalWrite(now,LOW);//暗
    }else{
      now--;
      if(now<3)now=13;
      digitalWrite(now,HIGH);//亮
      delay(100);//等一下
      digitalWrite(now,LOW);//暗
    }
}
