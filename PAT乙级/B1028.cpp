#include<stdio.h>

const int maxn = 110;
int score[maxn];

int main(){
    int n;
    scanf("%d", &n);
    int temp;
    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        score[temp]++;
    }
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &temp);
        printf("%d", score[temp]);
        if(i != m-1) printf(" ");
    }
    return 0;
}
