/**
复习建立哈夫曼树
aabbbbbdddcccc
1.将字符串化为数字
*/
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 128;

int code[maxn];

bool cmp(int a, int b){
    return a>b;
}

priority_queue<int, vector<int>, greater<int> > q;

int main(){
    memset(code, 0, sizeof(code));
    string str;
    cin>>str;
    int num = 0;
    for(int i = 0; i < str.size(); i++){
        code[str[i]]++;
    }
    sort(code, code+maxn, cmp);
    int number = 0;
    while(code[number] != 0){
        q.push(code[number]);
        number++;
    }
    int a, b, ans = 0;
    while(q.size() > 1){
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        q.push(a+b);
        ans += a+b;
    }
    printf("%d", ans);
    return 0;
}
