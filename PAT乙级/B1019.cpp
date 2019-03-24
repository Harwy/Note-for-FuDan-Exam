#include<cstdio>
#include<algorithm>
using namespace std;


bool cmp(int a, int b){
    return a>b;
}

void to_num(int a, int num[]){
    for(int i = 0; i < 4; i++){
        num[i] = a %10;
        a /= 10;
    }
}

int to_a(int num[]){
    int a=0;
    for(int i = 0; i < 4; i++){
        a = a*10 + num[i];
    }
    return a;
}

int main(){
    int a;
    int num[5];
    int big, small;
    scanf("%d", &a);
    while(1){
        to_num(a, num);
        sort(num, num+4, cmp);
        big = to_a(num);
        sort(num, num+4);
        small = to_a(num);
        a = big - small;
        printf("%04d - %04d = %04d\n", big, small, a);
        if(a == 0 || a == 6174) break;
    }

    return 0;
}
