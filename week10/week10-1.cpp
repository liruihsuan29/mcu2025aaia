//week10-1 buuble happy part2
PImage happy1, happy2, happy3;//�ĤT�i��
void setup(){
  size(600,675);//�j�p�M�Ϥ��̼˳�!
  happy1 = loadImage("happy1.jpg");
  happy2 = loadImage("happy2.jpg");
}
void draw(){
  background(happy1);
  //if(mousePressed) image(happy2, 0, 0);
  if(mousePressed){
    happy3 = happy2.get(mouseX-30, mouseY-30, 60, 60);
    image(happy3, mouseX-30, mouseY-30);
  }
}
