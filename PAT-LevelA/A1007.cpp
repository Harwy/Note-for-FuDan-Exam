/**
dp[i]:以i为结尾的最大元素和
s[i]:当前最大和时首元素


*/
#include<stdio.h>

const int maxn = 10010;
int dp[maxn], s[maxn];
int a[maxn]; //a[i]存放序列，dp[i]存放a[i]结尾的连续序列的最大和，s[i]记录产生dp[i]的首元素


int main(){
    int n;
    scanf("%d", &n);
    bool flag = false;
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);
        if(a[i] >= 0) flag = true;
    }
    if(flag == false){
        printf("0 %d %d\n", a[0], a[n-1]);
        return 0;
    }
    //边界
    dp[0] = a[0];
    for(int i = 1; i < n; i++){
        if(dp[i-1] + a[i] > a[i]){
            dp[i] = dp[i-1] + a[i];
            s[i] = s[i-1];
        }else{
            dp[i] = a[i];
            s[i] = i;
        }
    }
    int k = 0;
    for(int i = 1; i<n; i++){
        if(dp[i] > dp[k]){
            k = i;
        }
    }
    printf("%d %d %d\n", dp[k], a[s[k]], a[k]);

    return 0;
}
