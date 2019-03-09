#include<stdio.h>
#include<algorithm>
using namespace std;

const int maxn = 100010;
struct Node
{
    int address;
    int data;
    int next;
    bool flag; // 当前是否使用
}node[maxn];

bool cmp(Node a, Node b){
    if(a.flag != true || b.flag != true){
        return a.flag>b.flag;
    }else{
        return a.data<b.data;
    }
}

int main(){
    // 初始化
    for(int i=0;i<maxn;i++){
        node[i].flag = false;
    }
    int N,str;
    scanf("%d%d", &N, &str);
    int address,next,data;
    int count = 0;
    for(int i = 0; i<N;i++){
        scanf("%d%d%d", &address, &data, &next);
        node[address].address = address;
        node[address].data = data;
        node[address].next = next;
    }
    int p = str;
    while(p != -1){ // 从首地址开始枚举链表，排除题目给出的无效节点
        node[p].flag = true;
        count++;
        p = node[p].next;
    }
    if(count == 0){ // 特殊情况
        printf("0 -1");
    }else{
        sort(node, node+maxn,cmp);
        printf("%d %05d\n", count, node[0].address);
        for(int i=0;i<count;i++){
            if(i != count - 1){
                printf("%05d %d %05d\n", node[i].address, node[i].data, node[i+1].address);
            }else{
                printf("%05d %d -1", node[i].address, node[i].data);
            }
        }
    }
    return 0;
}
