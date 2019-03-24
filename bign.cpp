#include<cstdio>
#include<cstring>

//大数结构体
struct bign {
    int d[1000];
    int len;
    big(){
        memset(d, 0, sizeof(d));
        len = 0;
    }
};

bign change(char str[]){
    bign a;
    a.len = strlen(str);
    for(int i=0; i<a.len; i++){
        a.d[i] = str[a.len - i - 1] - '0'; //逆着赋值 a.d[0] ====> str[len - 0 - 1]
    }
    return a;
}


