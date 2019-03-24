/**
求中位数
0 1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5
*/
#include<stdio.h>
#include<algorithm>
#include<set>
using namespace std;
const int maxn = 10010;

int st[maxn];

bool cmp(int a, int b){
    return a>b;
}

int main(){
    int n;
    scanf("%d", &n);
    int temp;
    for(int i = 0; i < n; i++){
        scanf("%d", &st[i]);
    }
    sort(st, st+n, cmp);
    int number = (n%2==0)?2:1;
    double ans = 0;
    if(number == 1){ //奇数个
        ans = st[n/2];
        printf("%.0f", ans);
    }else{
        ans = 1.0*(st[n/2] + st[n/2 - 1])/2;
        printf("%.1f", ans);
    }

    return 0;
}
