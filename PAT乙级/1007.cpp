/*
    手工模拟除法
*/
#include<iostream>
using namespace std;

int main(){
    string A; // 被除数
    char Q;
    int B,R=0;
    int current;  // 当前被除数
    cin>>A>>B;
    for(int i=0;i<A.length();i++){
        current = R*10 + (A[i]-'0');
        Q = current / B + '0';
        R = current % B;
        if(i==0 && Q=='0'){
            continue;
        }else{
            cout<<Q;
        }
    }
    cout<<' '<<R;
    return 0;
}
