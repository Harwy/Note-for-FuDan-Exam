#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    printf("max min abs: \n");
    printf("1 -3 max: %d min: %d\n", max(1,-3), min(1,-3));
    printf("1 -3 abs: %d %d\n", abs(-1), abs(-3));

    printf("swap: \n");
    int x=1,y=2;
    printf("%d %d\n",x,y);
    swap(x,y);
    printf("swap: %d %d\n",x,y);

    printf("reverse: \n");
    string str = "HelloWorld!";
    for(int i=0;i< str.length();i++){
        printf("%c", str[i]);
    }
    printf("\n");
    reverse(str.begin(),str.end());
    for(int i=0;i< str.length();i++){
        printf("%c", str[i]);
    }

    printf("\nnext_permutation: \n");
    int a[10] = {1,2,3};
    do{
        printf("%d%d%d\n",a[0], a[1], a[2]);
    }while(next_permutation(a,a+3));

    printf("fill: \n");
    fill(a+1,a+5,233); // a[0]~a[4]
    for(int i=0;i<5;i++){
        printf("%d ", a[i]);
    }

    printf("\nsort: \n");

    return 0;
}
