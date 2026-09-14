//week02_2_ardunio_void_setup_void_loop
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);//發出buzzer聲音
}
//勾勾(ctrl-R)箭頭往右(ctrl-U)上傳到電路板
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8,HIGH);//發出高電位
delay(1000);//等一秒
digitalWrite(8,LOW);
delay(1000);//(1000很慢 10很吵 2 有聲音 1音頻高)
}
