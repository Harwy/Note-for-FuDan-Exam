#include<stdio.h>

const int MAXN = 1010;

int dp[MAXN];

int F(int n){
    if(n == 0 || n == 1) return 1; //递归边界
    if(dp[n] != -1) return dp[n]; // 已经计算过，直接返回结果，不再重复计算
    else{
        dp[n] = F(n-1) + F(n-2); //计算F(n)并保存dp
        return dp[n]; // 返回F(n)的结果
    }
}