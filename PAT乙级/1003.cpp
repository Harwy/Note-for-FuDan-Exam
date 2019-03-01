#include<stdio.h>
#include<cmath>
using namespace std;
int sushu(int n);
int main(){
    int M,N;
    int num=0;
    int n=0;
    int flag;
    scanf("%d",&M);
    scanf("%d",&N);
    for(int i=2;n<=N;i++){
        flag = sushu(i);
        if(flag==1)
            n++;
        if(n>=M && n<=N && flag==1){
            num++;
            if(num%10!=1){
                printf(" ");
            }
            printf("%d",i);
            if(num%10==0){
                printf("\n");
            }
        }
    }
    return 0;
}

int sushu(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
