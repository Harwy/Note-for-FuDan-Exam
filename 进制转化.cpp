#include<stdio.h>
int main(){
    int x,p; // x��P��������p�ǽ���
    scanf("%d %d",&x,&p);
    int y=0,product=1;
    while(x!=0){
        y=y+(x%10)*product;
        x=x/10;
        product=product*p;
    }
    return 0;
}
