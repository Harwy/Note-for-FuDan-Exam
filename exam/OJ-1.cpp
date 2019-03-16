/*
1
5
 */
#include<stdio.h>
#include<cstring>
const int maxn = 10010;

long long m[maxn];
int dp[maxn]; //当前n能被3整除的个数

//记录n长度之和
long long F(int n){
    if(n == 1) return 1;
    if(m[n] != 0) return m[n];
    else{
        m[n] = F(n-1) + n;
        return m[n];
    }
}

//记录n长度下能被3整除的数量
int DP(int s){
    if(s == 1) return ((F(1)%3==0)? 1 : 0);
    if(dp[s] != -1) return dp[s];
    else{
        dp[s] = DP(s-1) + ((F(s)%3==0)? 1 : 0);
        return dp[s];
    }
}

int main(){
    memset(dp, -1, sizeof(dp));
    int t, n;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        int d = DP(n);
        printf("%d\n", d);
    }
    return 0;
}
