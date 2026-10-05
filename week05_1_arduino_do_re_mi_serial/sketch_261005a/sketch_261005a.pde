//week05_1_arduino_do_re_mi_serial
//只有一條USBserial線 要按下方塊
//修改week02
import processing.serial.*;//使用USB Serial外掛
Serial myPort;//將用 myPort 來傳 USB Serial 資料
void setup(){
  size(300,200);//隨便的視窗
  myPort = new Serial(this, "COM3",9600);//中間"COM3"
}
void draw(){
}
void keyPressed(){//按數字鍵時，會利用 USB Serial 傳資料到電路板
  if(key=='1') myPort.write('1');
  if(key=='2') myPort.write('2');
  if(key=='3') myPort.write('3');
}
