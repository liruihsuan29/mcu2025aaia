//week14-5sound
//選單 sketch-library-manage libraries...
//安裝sound後,開始寫
//選單file-examples選libraries核心函式庫sound-soundfile-jungle
//再自己寫
import processing.sound.*;//java使用sound外掛
SoundFile music,sword,monkey,intro; //宣告一個變music
void setup(){
  size(640, 360);//記得要把音樂檔,拉到程式裡
  sword = new SoundFile(this, "sword slash.mp3");//小心檔名不要寫錯
  monkey = new SoundFile(this, "Monkey 1.mp3");
  intro = new SoundFile(this, "Intro Song_Final.mp3");//今天沒用到
  music = new SoundFile(this, "In Game Music.mp3");
  music.play();//play()播放
}
void mousePressed(){
  if(mouseButton==LEFT) sword.play();
  else monkey,play();
}
void draw(){
  //裡面是空白
}
