/**
priority_queue<int> q; //默认数字大的优先级高
priority_queue<int, vector<int>, less<int> > q;
vector<int> :这是一个堆栈
less<int> :大顶堆（越来越小）
greater<int> :小顶堆（越来越大）
*/
#include<cstdio>
#include<queue>
using namespace std;

priority_queue<long long, vector<long long>, greater<long long>> q;

int main(){
    int n;
    long long temp, x, y, ans=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%lld", &temp);
        q.push(temp);
    }
    while(q.size() > 1){
        x = q.top();
        q.pop();
        y = q.top();
        q.pop();
        q.push(x+y);
        ans += x+y;
    }
    printf("%lld\n", ans);
    return 0;

}
