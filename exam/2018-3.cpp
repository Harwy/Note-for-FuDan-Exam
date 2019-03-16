
#include<stdio.h>

const int MAXN = 10010;

long long dp[MAXN];

long long F(int n){
    if(n == 1) return 1; //递归边界
    if(n == 2) return 2;
    if(dp[n] != 0) return dp[n]; // 已经计算过，直接返回结果，不再重复计算
    else{
        dp[n] = F(n-1) + F(n-2); //计算F(n)并保存dp
        return dp[n]; // 返回F(n)的结果
    }
}

int main(){
    int n;
    scanf("%d", &n);
    long long L = F(n);
    printf("%lld", L);
    return 0;
}
