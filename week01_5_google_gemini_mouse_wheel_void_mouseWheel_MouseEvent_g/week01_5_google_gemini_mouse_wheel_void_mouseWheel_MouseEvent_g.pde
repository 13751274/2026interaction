//week01_5_google_gemini_mouse_wheel_void_mouseWheel_MouseEvent_getCount
//把AI的程式碼copy
float circleSize = 50;

void setup() {
  size(400, 400);
}

void draw() {
  background(220);
  // 畫出圓形
  ellipse(width / 2, height / 2, circleSize, circleSize);
}

// 監聽滑鼠滾輪事件
void mouseWheel(MouseEvent event) {
  float e = event.getCount();
  
  // 依據滾輪數值改變圓的大小
  circleSize -= e * 5; 
  
  // 限制圓形大小的極限
  circleSize = constrain(circleSize, 10, 350);
}
