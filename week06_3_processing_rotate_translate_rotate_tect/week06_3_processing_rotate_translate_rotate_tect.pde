//week06_3_processing_rotate_translate_rotate_tect
//想做一個會旋轉的迷宮 
void setup(){
  size(500,500);
}
void draw(){
  background(0);//黑色背景
  translate(250,250);
  //translate(mouseX,mouseY); 
  //println(mouseX,mouseY);
  rotate(radians(frameCount));//持續轉動//暫時在小黑 印出MOUSE座標
  rect(-200,-200,400,400);//座標奇怪的四邊形
}
