///week08-1.cpp �w�w�ƧǪk bubble sort
#include <stdio.h>
int main()
{

    ///int a[10] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9};
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    for(int i=0; i<10; i++) printf("%d ", a[i]);
    printf("\n");

    for(int k=0; k<9; k++){ ///�̤j��9�ӼƦr�����A�N����
        for(int i=0; i<9; i++){///10�ӤH�A���ۤ�9��
            if(a[i]> a[i+1]){///�j�p����A�N�洫
                int temp = a[i];///�Ѯv�W�ҥΨ�M���洫
                a[i] = a[i+1];///������
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i]);
        printf("\n");
    }
}
