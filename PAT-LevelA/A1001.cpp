#include<stdio.h>
#include<stack>
using namespace std;
int main(){
    int a,b,sum;
    scanf("%d%d", &a, &b);
    sum = a+b;
    if(sum < 0){
        printf("-");
        sum = -1 * sum;
    }
    stack<int> q;
    int flag = 0;
    if(sum == 0){
        q.push(0);
        flag++;
    }else{
        while(sum != 0){
            q.push(sum%10);
            flag++;
            sum = sum / 10;
        }
    }

    while(!q.empty()){
        printf("%d", q.top());
        q.pop();
        if((flag-1) % 3 == 0 && flag != 1){
            printf(",");
        }
        flag--;
    }

    return 0;
}
