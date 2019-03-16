#include<stdio.h>
#include<algorithm>
using namespace std;

long long max1, max2, max3; //¼ÙÉèmax1>max2>max3, min1<min2
long long min1, min2;


void findMax(int s){
    if(s > max1){
        max3 = max2;
        max2 = max1;
        max1 = s;
    }else if(s > max2){
        max3 = max2;
        max2 = s;
    }else if(s > max3){
        max3 = s;
    }
}

void findMin(int s){
    if(s < min1){
        min2 = min1;
        min1 = s;
    }else if(s < min2){
        min2 = s;
    }
}

int main(){
    int n;
    //max1=max2=max3=min1=min2=MINX;
    long long temp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lld", &temp);
        findMax(temp);
        findMin(temp);
    }
    printf("%lld", max(max1*max2*max3, min1*min2*max1));
    return 0;
}
