//week05_3_arduino_do_re_mi_serial_blink
//week05_2_processing_do_re_mi_serial_tone_noTone
//修改自week05_1
void setup() {
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);//對應'0'
  pinMode(11,OUTPUT);//對應'1'
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  Serial.begin(9600);// USB Serial 開始傳輸，速度9600bps
  tone(8,523,100);//Do
  delay(200);
  tone(8,587,100);//Re
  delay(200);
  tone(8,659,100);//Mi
  delay(200);
  tone(8,587,100);//Re
  delay(200);
  tone(8,523,100);//Do
  delay(200);
}
char c='0';//0沒聲音 1do 2re 3mi
void loop() {
  if(Serial.available()){ //如果 USB Serial 有收到資料
    c = Serial.read();//就讀進來 
  }
   for(int i=10;i<=13;i++)digitalWrite(i,LOW);//先都暗下來
   if(c>='0' && c<='3')digitalWrite(c-'0'+10,HIGH);
   if(c=='0')noTone(8);
   if (c=='1') tone(8,523);//Do 1秒
   if (c=='2') tone(8,587);//Re 1秒
   if (c=='3') tone(8,659);//Mi 1秒
}
