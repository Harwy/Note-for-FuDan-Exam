/**
9
-2 1 -3 4 -1 2 1 -5 4

*/

#include<stdio.h>
#include<algorithm>
using namespace std;

const int maxn = 10010;

int a[maxn], dp[maxn];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    dp[0] = a[0];
    for(int i = 1; i < n; i++){
        dp[i] = max(dp[i-1]+a[i], a[i]);
    }
    int k = 0;
    for(int i = 1; i < n; i++){
        if(dp[i] > dp[k]){
            k = i;
        }
    }
    printf("%d", dp[k]);
    return 0;
}
