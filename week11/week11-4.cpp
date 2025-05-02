///week11-4 buuble happy part2
PImage happy1, happy2, happy3;///第三張圖
PImage[] happy = new PImage[200];///java 的陣列宣告,有200格
int N = 0;///目前有0張小圖片
int []x  = new int[200];
int []y  = new int[200];
void setup(){
  size(600,675);///大小和圖片依樣喔!
  happy1 = loadImage("happy1.jpg");
  happy2 = loadImage("happy2.jpg");
}
void mousePressed(){
  happy[N] = happy2.get(mouseX-30, mouseY-30, 60, 60);
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
void draw(){
  background(happy1);
  for(int i=0; i<N; i++){
    image(happy[i],x[i]-30, y[i]-30);
}
