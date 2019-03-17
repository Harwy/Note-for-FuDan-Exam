#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxc = 210;
const int maxn = 10010;
int HashTable[maxc]; //颜色集合,映射为颜色顺序->数字
int A[maxn], dp[maxn];

int main(){
    int m, L, n;
    int x;
    scanf("%d%d", &n, &m);
    memset(HashTable, -1, sizeof(HashTable));
    for(int i = 0; i < m; i++){
        scanf("%d", &x);
        HashTable[x] = i;
    }
    int num = 0;
    scanf("%d", &L);
    for(int i = 0; i < L;i++){
        scanf("%d", &x);
        if(HashTable[x] >= 0){
            A[num++] = HashTable[x];
        }
    }
    // LIS问题模板
    int ans = -1;
    for(int i = 0; i < num; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(A[j] <= A[i] && dp[i] < dp[j] + 1){
                dp[i] = dp[j] + 1;
            }
        }
        ans = max(ans, dp[i]);
    }
    printf("%d\n", ans);
    return 0;
}
