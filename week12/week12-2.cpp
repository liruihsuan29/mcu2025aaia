///week12-2.cpp
///fibonacci �ƦC�O����
///1 1 2 3 5 8 13 21 34 �аݤU�@�ӬO����
///�W�h:�e2���ۥ[
#include <stdio.h>
int main()
{///�}�C���ŧi, �k�䦳�L����, �S�g������0
    int a[30] = {0,1};///�̭��񵪮�
    printf("1 ");///���L�X�Ĥ@��
    for(int i=2; i<30; i++){///�A�L�᭱����
        a[i] = a[i-1] + a[i-2];///�e�ⶵ�ۥ[
        printf("%d ", a[i]);
    }
}
