//week05_1_arduino_do_re_mi_serial
//在啟動void setup()裡 多了do re mi 才知道小板子有開機運作
//修改week02
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);// USB Serial 開始傳輸，速度9600bps
  tone(8,523,100);//Do 1秒//會出錯 滑過去 沒聽到
  delay(200);
  tone(8,587,100);//Re 1秒//會出錯 滑過去 沒聽到
  delay(200);
  tone(8,659,100);//Mi 1秒
}

void loop() {
  if(Serial.available()){ //如果 USB Serial 有收到資料
    char c = Serial.read();//就讀進來 
    if (c=='1') tone(8,523,100);//Do 1秒
    if (c=='2') tone(8,587,100);//Re 1秒
    if (c=='3') tone(8,659,100);//Mi 1秒
  }
}
