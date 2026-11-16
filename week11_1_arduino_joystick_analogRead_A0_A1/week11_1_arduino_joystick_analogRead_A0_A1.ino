//week11_1_arduino_joystick_analogRead_A0_A1
//要把joystick的A0,A1接起來 讀資料 很吵的輸出聲音
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int x=analogRead(A0);//讀入X座標
  int y=analogRead(A1);//讀入Y座標
  tone(8,x);//會把X的值 直接很吵的輸出
  //如果很吵 想暫時停止 把makeuno的跳針往左推
}
