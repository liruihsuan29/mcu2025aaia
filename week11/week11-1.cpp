///week11-1.cpp
///�禡/��� function
#include <stdio.h>
///�e�� �w�q �禡
///�e�X���Oint���
///�e�i�h���a,���b
int addnum(int a, int b)
{
    printf("�A��Oaddnum()��,�o��Ѽ�a:b%d b:%d\n",a ,b);
    int ans = a + b;
    printf("��X����%d�nreturn�X�h\n",ans);
    return ans;///���X�Ӫ����G�ǥX�h

}
int main()
{///�D�n���禡�A�D�{��
    printf("�bmain()�I�s�ϥ�addnum() \n");
    int ans = addnum(2,3);
    printf("�o�쪺����:%d\n", ans);
}
