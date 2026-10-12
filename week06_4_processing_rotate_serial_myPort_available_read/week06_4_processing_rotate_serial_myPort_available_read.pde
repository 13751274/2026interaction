//week06_4_processing_rotate_serial_myPort_available_read
//修改week06_3_processing_rotate_translate_rotate_tect
//上面還要再補1-3行
//想做一個會旋轉的迷宮 
import processing.serial.*;
Serial myPort;
void setup(){
  size(500,500);
  myPort=new Serial(this,"COM3",9600);
}
int now=0;//現在的旋轉角度
int dd=1;//now++ now--用now+=dd其中dd是1 or -1
void draw(){
  if(myPort.available()>0){
    if(myPort.read()=='1')dd=-1;//讀入的資料是1
    else dd=1;
  }
  background(0);//黑色背景
  translate(250,250);
  now+=dd;
  rotate(radians(now));//持續轉動//暫時在小黑 印出MOUSE座標
  rect(-200,-200,400,400);//座標奇怪的四邊形
}
void mousePressed(){//暫時用mouse點擊 來修改dd轉動改變量
  if(dd==1)dd=-1;//正的變負的
  else dd=1;//負的變正的
}
