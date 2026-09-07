//week01_4_painter_background_stroke_strokeWeight
void setup(){
  size(500,500);
  background(255);//白色背景
  strokeWeight(5);
}
void draw(){
  if(mousePressed){
  if(mouseButton==LEFT) stroke(0);//畫黑線
  if(mouseButton==RIGHT) stroke(255);//用白色清掉
  line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
