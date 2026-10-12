//week06_5_processing_rotate_chessboard
//修改week06_3_processing_rotate_translate_rotate_tect
//想做一個會旋轉的迷宮 
void setup(){
  size(500,500);
}
void draw(){
  background(128);//黑色背景
  translate(250,250);
  rotate(radians(frameCount));//持續轉動//暫時在小黑 印出MOUSE座標
  rect(-200,-200,400,400);//座標奇怪的四邊形
  for(int i=0;i<8;i++){//左手I
    for(int j=0;j<8;j++){//右手J
      if((i+j)%2==1)fill(255);//白色
      else fill(0);//黑色
      rect(j*50-200,i*50-200,50,50);//小格子
    }
  }
}
