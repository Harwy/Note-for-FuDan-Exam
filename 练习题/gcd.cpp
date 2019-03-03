#include<stdio.h>

/* a与b的所有公约数中最大的那个 */
int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main(){
    printf("%d", gcd(144,13));
    return 0;
}
