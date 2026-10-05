//week05_3_processing_do_re_mi_serial_draw
//修改自week05_2
//希望有視覺的互動 畫面有按鍵
import processing.serial.*;//使用USB Serial外掛
Serial myPort;//將用 myPort 來傳 USB Serial 資料
void setup(){
  size(300,200);//隨便的視窗
  myPort = new Serial(this, "COM3",9600);//中間"COM3"
}
void draw(){
  background(128);
  if(p1==1)fill(0);
  else fill(255);
  rect(0,0,100,150);
  
  if(p2==1)fill(0);
  else fill(255);
  rect(100,0,100,150);
  
  if(p3==1)fill(0);
  else fill(255);
  rect(200,0,100,150);
  fill(255,0,0);
  if(now=='1')ellipse(50,175,50,50);
  if(now=='2')ellipse(150,175,50,50);
  if(now=='3')ellipse(250,175,50,50);
}
char now='0';//現在按什麼按鍵
int p1=0,p2=0,p3=0;//變數紀錄按鍵 一開始沒按 下面有修改
void keyPressed(){
  now=key;
  if(p1==0 && key=='1')myPort.write('1');//之前沒按 現在按
  if(p1==0 && key=='2')myPort.write('2');
  if(p1==0 && key=='3')myPort.write('3');
  if(p1==0 && key=='1')p1=1;//0代表沒有按 1代表按下去
  if(p2==0 && key=='2')p2=1;
  if(p3==0 && key=='3')p3=1;
}
void keyReleased(){
  now='0';
  if(key=='1')p1=0;//放開1鍵
  if(key=='2')p2=0;//放開2鍵
  if(key=='3')p3=0;//放開3鍵
  myPort.write('0');//告訴arduino不要發出聲音
}
