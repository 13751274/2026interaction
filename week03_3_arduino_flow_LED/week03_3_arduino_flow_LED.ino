//week03_3_arduino_flow_LED
//led流動的感覺
void setup() {
  for(int i=2;i<=13;i++)pinMode(i,OUTPUT);
}//全部都會發亮

void loop() {
  for(int i=2;i<=13;i++){
    for(int k=2;k<=13;k++) digitalWrite(k,LOW);//全暗
    digitalWrite(i,HIGH);//把I變亮
    delay(100);///每顆LED的時間
  }
}
