/**
priority_queue<int> q; //Ĭ�����ִ�����ȼ���
priority_queue<int, vector<int>, less<int> > q;
vector<int> :����һ����ջ
less<int> :�󶥶ѣ�Խ��ԽС��
greater<int> :С���ѣ�Խ��Խ��
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
