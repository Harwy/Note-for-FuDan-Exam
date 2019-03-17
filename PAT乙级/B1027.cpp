/**
换算问题

*/
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 15;

struct money{
    int Galleon;
    int Sickle;
    int Knut;
}m1, m2;

void change(char s[], money a){
    int temp = 0;
    int num=0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            temp = 10*temp + s[i] - '0';
        }else{
            if(num == 0){
                a.Galleon = temp;
                temp = 0;
                num++;
            }else if(num == 1){
                a.Sickle = temp;
                temp = 0;
                num++;
            }
        }
    }
    a.Knut = temp;
    return;
}

int main(){
    char need[maxn], want[maxn];
    scanf("%s", need);
    scanf("%s", want);
    change(need, m1);
    change(want, m2);
    if(m1 > b){
        printf("-");
        swap(a, b);
    }
    int account = b - a;
    int c = account % 30;
    int d = account / 30;
    int e = d / 18;
    d = d % 18;
    printf("%d.%d.%d", e, d, c);
    return 0;
}
