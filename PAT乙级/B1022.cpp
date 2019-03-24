/**
123 456 8

*/
#include<cstdio>

const int maxn = 10010;
int sum[maxn];
int main(){
    int a, b,d;
    int account;
    scanf("%d%d%d", &a, &b, &d);
    account = a+b;
    int i = 0;
    while(account != 0 || i==0){
        sum[i++] = account % d;
        account /= d;
    }
    while(i){
        printf("%d", sum[--i]);
    }
    return 0;

}
