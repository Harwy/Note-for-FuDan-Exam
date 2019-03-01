/*
利用hash表查询是否存在x
*/
#include<cstdio>
const int maxn = 100010;
bool hashTable[maxn] = {false};

int main(){
    int n,m,x;
    scanf("%d%d", &n, &m);
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        hashTable[x] = true; // 数字x出现过
    }
    for(int i=0;i<m;i++){
        scanf("%d", &x);
        if(hashTable[x] == true){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}