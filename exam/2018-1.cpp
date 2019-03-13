#include<stdio.h>
#include<algorithm>
using namespace std;

const int maxn = 100010;
struct Node {
    int number;
    int account;
}node[maxn];

bool cmp(Node a, Node b){
    if(a.account != b.account) return a.account>b.account;
    else return a.number<b.number;
}

int main(){
    for(int i=0; i<maxn; i++){
        node[i].account = 0;
    }
    int n;
    scanf("%d", &n);
    int k;
    for(int i=0; i<n; i++){
        scanf("%d", &k);
        if(node[k].account == 0){
            node[k].number = k;
            node[k].account++;
        }else{
            node[k].account++;
        }
    }
    sort(node, node+maxn, cmp);
    printf("%d", node[0].number);
    return 0;
}
