///week11-2.cpp
#include <stdio.h>

int main()
{
    printf("�п�J1�Ӽ�(ex. 183) ");
    int n;
    scanf("%d", &n); ///Ū�Jn
    int ans = 0;///�Q���̤j����
    while(n>0){///while�j��,�@�����
        printf("��� %d\n", n%10);///��j����,��s����
        n = n/10; ///�駹��, n �|�ܤp
    }
    printf("�̤j���֬O %d\n",ans);
}
