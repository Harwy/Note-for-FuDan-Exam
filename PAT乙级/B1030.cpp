/**
str : 10^5
P A T
�����
* ����������ؼ���ÿһ������Ҫ��1000000007ȡ��
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int P, A, T;

int main(){
    char str;
    scanf("%c", &str);
    P=A=T=0;
    while(str != '\n'){
        if(str == 'P'){
            P++;
        }else if(str == 'A'){
            A += P;
            A = A%1000000007;
        }else if(str == 'T'){
            T += A;
            T = T%1000000007;
        }
        scanf("%c", &str);
    }
    printf("%d", T);
    return 0;
}
