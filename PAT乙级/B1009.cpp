/**
说反话

*/
#include<stdio.h>
#include<cstring>
using namespace std;

int main(){
    char a[90];
    scanf("%[^\n]", a); //正则表达式
    char b[90][90];
    int r = 0, h = 0;
    int len = strlen(a);
    for(int i = 0; i< len; i++){
        if(a[i] != ' '){
            b[r][h++] = a[i];
        }else{
            b[r++][h] = '\0';
            h = 0;
        }
    }
    for(int i = r; i >= 0; i--){
        printf("%s", b[i]);
        if(i > 0)  printf(" ");
    }
    return 0;
}
