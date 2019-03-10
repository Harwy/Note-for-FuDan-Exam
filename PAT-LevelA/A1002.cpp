/*
两个多项式
K：多项式中非0项个数
*/
#include<stdio.h>

const int maxn = 1010;

int main(){
    double a[maxn] = {0};
    int k1,k2;
    int N;
    double an;
    scanf("%d", &k1);
    while(k1--){
        scanf("%d%lf", &N, &an);
        a[N] += an;
    }
    scanf("%d", &k2);
    while(k2--){
        scanf("%d%lf", &N, &an);
        a[N] += an;
    }
    // 输出
    int count=0;
    for(int i=0;i<1000;i++){
        if(a[i]!=0) count++;
    }
    printf("%d", count);
    for(int i=1000;i>=0;i--){
        if(a[i]!=0) printf(" %d %.1f", i, a[i]);
    }
    return 0;
}
