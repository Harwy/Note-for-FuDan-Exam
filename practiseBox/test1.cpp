#include<stdio.h>

const int maxn = 30;
int n, V, maxValue=0; //物品件数n，背包容量V，最大价值maxValue
int w[maxn], c[maxn];
//DFS,index为当前处理的物品编号
void DFS(int index, int sumW, int sumC){
    if(index == n){ // 已经完成n件物品的选择
        if(sumW <= V && sumC > maxValue){
            maxValue = sumC;
        }
        return;
    }
    // 否则选择岔道
    DFS(index + 1, sumW, sumC);
    DFS(index + 1, sumW + w[index], sumC + c[index]);
}

int main(){
    scanf("%d%d", &n, &V);
    for(int i=0; i<n; i++){
        scanf("%d", &w[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &c[i]);
    }
    DFS(0,0,0);
    printf("%d\n", maxValue);
    return 0;
}

