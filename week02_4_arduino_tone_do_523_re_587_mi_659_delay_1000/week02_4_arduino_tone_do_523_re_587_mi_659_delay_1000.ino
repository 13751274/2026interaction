//week02_4_arduino_tone_do_523_re_587_mi_659_delay_1000
void setup() {//只做一次
  // put your setup code here, to run once:
   pinMode(8,OUTPUT);
  tone(8,523,100);//DO 1秒
  delay(1000);
  tone(8,587,1000);//RE
  delay(1000);
  tone(8,659,1000);//MI
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  //重複 不會停
}
