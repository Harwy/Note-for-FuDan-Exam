#include<stdio.h>
#include<queue>
using namespace std;
const int maxn = 1010;
struct mouse
{
    int weight; // 老鼠的质量
    int R;      // 老鼠的排名
}mouse[maxn];

int main(){
    int np,ng;
    scanf("%d%d", &np, &ng); // np老鼠个数，ng是每组老鼠数量
    for(int i=0;i<np;i++){
        scanf("%d", &mouse[i].weight);
    }
    queue<int> q;
    int order;
    for(int i=0;i<np;i++){
        scanf("%d", &order);
        q.push(order);
    }
    int temp = np,group;  // 当前轮比赛老鼠的总数，group是组数
    while(q.size() != 1){
        // 计算group，即当前轮分为几组进行比赛
        if(temp % ng == 0) group = temp /ng;
        else group = temp / ng +1;
        // 一组中，选出最大的老鼠
        for(int i = 0;i<group;i++){
            int k = q.front();
            for(int j=0;j<ng;j++){
                // 最后一组老鼠不足NG时
                if(i*ng + j >= temp) break;
                int front = q.front();
                if(mouse[front].weight > mouse[k].weight){
                    k = front; // 找出质量最大的老鼠
                }
                mouse[front].R = group + 1;
                q.pop();
            }
            q.push(k);  // 晋级的老鼠
        }
        temp = group;
    }
    mouse[q.front()].R = 1;
    for(int i = 0;i<np;i++){
        printf("%d", mouse[i].R);
        if(i<np-1) printf(" ");
    }
    
    return 0;
}
