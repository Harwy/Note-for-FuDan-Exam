/**
4
1 2 3 4
3
*/
#include<cstdio>
const int maxn = 210;
int main(){
    int n;
    int data[maxn];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }
    int x;
    scanf("%d", &x);
    int k;
    for(k = 0; k < n; k++){
        if(x == data[k]) {
            printf("%d\n", k);
            break;
        }

    }
    if(k == n) printf("-1\n");
    return 0;
}
