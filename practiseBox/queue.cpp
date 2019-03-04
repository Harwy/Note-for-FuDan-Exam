#include<stdio.h>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    for(int i=1; i<=5;i++){
        q.push(i);  // 1 2 3 4 5
    }
    printf("%d %d\n", q.front(), q.back());
    while(q.empty() != true){
        printf("%d ", q.front());
        q.pop();
    }

    return 0;
}