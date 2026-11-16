//week11_3_arduino_joystick_serial_map_0_255
//將要跟processing 互溝通
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
}
int myAnalogRead(int pin){
    //利用map()函式 把0..1023對應0..255
    return map(analogRead(pin),0,1023,0,255);
}
void loop() {
  Serial.write(myAnalogRead(A0));
  Serial.write(myAnalogRead(A1));
  if(digitalRead(2)==LOW)Serial.println("D");//Down按
  else Serial.println("U");//Up沒按
}
