//week02_1_void_setup_void_draw_fill_textSize_text_key
//file-preference字型放大
void setup(){//設定的函式
  size(500,500);
}
void draw(){
  if(mousePressed)background(#F58A8A);
  else background(#D6F074);//tool-color選擇器
  fill(0,0,255);//藍色的填充色
  textSize(80);//字大小
  text("key: "+key,200,300);
}
