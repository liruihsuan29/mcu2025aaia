///week11-4 buuble happy part2
PImage happy1, happy2, happy3;///�ĤT�i��
PImage[] happy = new PImage[200];///java ���}�C�ŧi,��200��
int N = 0;///�ثe��0�i�p�Ϥ�
int []x  = new int[200];
int []y  = new int[200];
void setup(){
  size(600,675);///�j�p�M�Ϥ��̼˳�!
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
