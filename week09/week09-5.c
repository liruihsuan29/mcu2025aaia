//week09-5 bubble happy part1
size(310,450);
strokeWeight(3);
fill(255, 255, 0);
rect(10, 10, 58*5, 58*7, 30);
for(int i=10+58; i<10+58*7; i+=58){
  line(10, i, 300, i);
}
for(int i=0; i<7; i++){//����i��7��
  for(int j=0; j<5; j++){//�k�� j��5��
    int x = 39+j*58, y = 39+i*58;//x�����k��j y����i
    ellipse(x, y, 50, 50);
  }
}
