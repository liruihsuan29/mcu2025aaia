///week10-2.cpp
#include <stdio.h>
int main()
{
    printf("�п�J1�Ӿ��:");
    int n;
    scanf("%d", &n);
    ///printf("�Ӧ�ƬO %d\n", n%10);
    ///printf("�Q��ƬO %d\n", n/10 n%10);
    ///printf("�ʦ�ƬO %d\n", n/100 n%10);
    while(n>0){///�p�G�٦��ѤUn �N�~��
        printf("�Ʀr %d ��֭�X:%\n", n, n%10);///���
        n =n/10;///�Ʀr�ܤp�F ��1/10
    }
}
