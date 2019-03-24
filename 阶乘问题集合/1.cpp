#include<stdio.h>
using namespace std;

// 计算n！中有多少个质因子p
int cal(int n, int p){
    int ans = 0;
    while(n){
        ans += n / p;
        n /= p;
    }
    return ans;
}

int cal_better(int n, int p){
    if(n < p) return 0;
    return n/p + cal_better(n/p, p);
}
/**
n
6/2 = 3
3/2 = 1
1/2 = 0
*/
int main(){
    //int ans = cal(6, 2);
    int ans = cal_better(10, 2);
    printf("%d\n", ans);
    return 0;
}
