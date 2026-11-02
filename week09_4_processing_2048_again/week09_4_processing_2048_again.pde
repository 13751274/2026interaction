//week09_4_processing_2048_again
//自己寫2048配上聲音 慢慢來 從簡單到完整
void setup(){
  size(550,550);
}
void draw(){
  background(250,248,239);
  noStroke();//不要黑線
  fill(187,173,160);//大格子色彩
  rect(40,40,450,450,9);//大格子
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      int x=50+j*(100+10);
      int y=50+i*(100+10);//加點位移 間隔
      fill(238,228,218);//小格子色彩
      rect(x,y,100,100,6);
    }
  }
}
