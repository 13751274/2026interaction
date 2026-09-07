//week01_3_painter_if_mousePressed_line_if_mouseButton_stroke
//做一個簡單小畫家 
void setup(){
  size(500,500);
}
void draw(){
  if(mouseButton==LEFT) stroke(255,0,0);//左鍵紅色
  if(mouseButton==RIGHT) stroke(0,0,255);//右鍵藍色
  if(mousePressed)line(mouseX,mouseY,pmouseX,pmouseY);
  //按下去時畫線mouse座標 之前座標
}
