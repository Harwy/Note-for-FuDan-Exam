/**
4
2 3 -2 4
*/
#include<stdio.h>
#include<algorithm>
using namespace std;

const int maxn = 10010;

int a[maxn], MAX[maxn], MIN[maxn];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    MAX[0]=MIN[0] = a[0];
    int ans=a[0];
    for(int i = 1; i < n; i++){
        MAX[i] = max(MAX[i-1]*a[i], max(a[i], MIN[i-1]*a[i]));
        MIN[i] = min(MAX[i-1]*a[i], min(a[i], MIN[i-1]*a[i]));
        ans = max(MAX[i], ans);
    }

    printf("%d", ans);
    return 0;
}
