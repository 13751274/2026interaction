//week06_1_arduino_pin_2_ button_INPUT_PULLUP
void setup() {
  pinMode(2,INPUT_PULLUP);//預設pin2是button
  pinMode(8,OUTPUT);//預設pin8是buzzer
  tone(8,523,100);//開啟時 發一下聲音 代表程式沒錯
}//若都沒發聲音 會以為程式出錯

void loop() {
  if(digitalRead(2)==LOW){
      tone(8,523,100);//0.1s
      delay(100);//等一下 讓聲音夠長
    }
}
