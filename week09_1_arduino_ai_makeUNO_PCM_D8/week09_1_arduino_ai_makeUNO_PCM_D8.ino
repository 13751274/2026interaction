//week09_1_arduino_ai_makeUNO_PCM_D8
//想要讓makeuno 發出更多元的聲音 不是單調tone()
//用AI找出答案
//Q1:MakeruNO 本身可以用pin8的 buzzer 利用 tonel 來發出單調的聲 音,有辦法發出比較精彩的聲音嗎? ex.wavor mp3 (註:老師教 AI要10 10問10答 百問百簽,所以現在要一步步練習間互動,找到答案)
//Q2:幫我找PCM相關的libraries 我想試試看
//Q3:如何修改pcm library 讓他利用pin8的軟體PWM或其他輸出技術撥放PCM
//這時 AI給我們修改後的makeuno_pcm_d8.zip解開
//Q4:把編譯時出現的錯誤給AI
// Maker UNO: turn ON the onboard BUZZER slide switch.
// Board selection: Arduino Uno / ATmega328P / 16 MHz.
// This sketch uses the local modified PCM.cpp, NOT the original D11 library.
#include "PCM.h"
#include "sounddata.h"

void setup() {
  startPlayback(sounddata_data, sounddata_length);

}

void loop() {
  // put your main code here, to run repeatedly:

}
