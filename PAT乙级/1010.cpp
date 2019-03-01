#include<stdio.h>
#include<algorithm>
using namespace std;

struct MoonCake{
    int num; // 总量
    double sum; // 售价
    double ave; // 均价
}moon[1000];

bool cmp(MoonCake a, MoonCake b){
    return a.ave>b.ave;
}

int main(){
    int n,sum,i;
    double answer=0;
    scanf("%d %d", &n, &sum);
    for(i=0;i<n;i++){
        scanf("%d", &moon[i].num);
    } // 库存
    for(i=0;i<n;i++){
        scanf("%lf", &moon[i].sum);
        moon[i].ave = 1.00*moon[i].sum / moon[i].num;
    } // 售价  单位价格
    sort(moon, moon + n, cmp); // 排序
    i=0;
    while(sum>0){
        if(sum > moon[i].num){
            answer+=moon[i].sum;
            sum = sum - moon[i].num;
        }else{
            answer+= 1.00 * sum * moon[i].sum / moon[i].num;
            sum=0;
        }
        i++;
    }
    printf("%.2f", answer);
    return 0;
}
