#include<stdio.h>
int num(int A,int DA){
    int p=0,temp;
    while(A){
        temp=A%10;
        A=A/10;
        if(temp==DA){
            p=10*p+DA;
        }
    }
    return p;
}

int main(){
    int A,B,DA,DB;
    scanf("%d %d %d %d",&A,&DA,&B,&DB);
    printf("%d",num(A,DA)+num(B,DB));
    return 0;
}

