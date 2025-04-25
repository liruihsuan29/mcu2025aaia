//week10.4.cpp
//LeetCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};//這裡要放total出現幾次
        int largest = 0;
        for(int i=1; i<=n; i++){//1..n人類的迴圈
            int now = i;//現在要剝皮的數字
            int total = 0;
            while(now>0){
                //迴圈裡，把total一直加起來
                total += now %10;//剝皮now %10把每一位數家到total裡
                now = now /10;//剝皮後now變小了
            }
            a[total]++;//迴圈後面，要統計total的出現次數
            if( a[total] > largest ) largest = a[total];
        }
        int ans = 0;
        for(int i=0;i<100;i++){
            if(a[i]==largest) ans++;//如果a[i]是最大的數的那群的就多1群
        }
        return ans;
    }
};
