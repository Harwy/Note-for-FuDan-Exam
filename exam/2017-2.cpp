#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int a[10];

int main(){
    string str;
    cin>>str;
    int num=0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            a[num++] = str[i] - '0';
        }
    }
    int S = 0;
    int q = 10;
    for(int i = 0; i < 9; i++){
        S += a[i] * q;
        q--;
    }
    int M = S % 11;
    M = 11 - M;
    cout<<str<<'-';
    if(M < 10){
        printf("%d", M);
    }else if(M == 10){
        printf("X");
    }else{
        printf("0");
    }

    return 0;
}
