#include<stdio.h>
#include<string>
using namespace std;
const int maxn = 100010;
struct Node{
    char data;
    int next;
    bool flag;
}node[maxn];

int main(){
    for(int i=0; i<maxn; i++){
        node[i].flag = false;
    }
    int str1,str2;
    int N;
    scanf("%d%d%d", &str1, &str2, &N);
    int address, next;
    char data;
    for(int i=0;i<N;i++){
        scanf("%d %c %d", &address, &data, &next);
        node[address].data = data;
        node[address].next = next; 
    }
    int p;
    for(p = str1; p != -1; p=node[p].next){
        node[p].flag = true;
    }
    for(p = str2; p != -1; p=node[p].next){
        // 找到第一个已经在第一条链上出现过的数据点
        if(node[p].flag == true) break;
    }
    if(p != -1) {
        printf("%05d\n", p);
    }else{
        printf("-1\n");
    }
    return 0;
}