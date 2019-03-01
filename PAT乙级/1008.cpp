/*
C代表“锤子”、J代表“剪刀”、B代表“布”
*/
#include<iostream>
using namespace std;

int main(){
    int N;
    char A[105],B[105];
    int Q[3]={0,0,0};
    int P[3]={0,0,0};
    int win=0,bal=0;
    int max1=0,max2=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A[i]>>B[i];
        if((A[i]=='C'&&B[i]=='J') || (A[i]=='J'&&B[i]=='B') || (A[i]=='B'&&B[i]=='C')){ // 甲赢
            if(A[i]=='C')Q[0]++;
            if(A[i]=='J')Q[1]++;
            if(A[i]=='B')Q[2]++;
            win++;
        }else if(A[i]==B[i]){ // 平局
            bal++;
        }else{
            if(B[i]=='C')P[0]++;
            if(B[i]=='J')P[1]++;
            if(B[i]=='B')P[2]++;
        }
    }
    for(int i=0;i<3;i++){
        if(max1<Q[i])max1=Q[i];
    }
    for(int i=0;i<3;i++){
        if(max2<P[i])max2=P[i];
    }
    // 石头剪刀布结束
    cout<<win<<' '<<bal<<' '<<(N-win-bal)<<endl;
    cout<<(N-win-bal)<<' '<<bal<<' '<<win<<endl;
    if(Q[0]>=Q[1] && Q[0]>Q[2]) {
            cout<<"C ";
    }
    if(Q[1]>Q[0] && Q[1]>Q[2]) {
            cout<<"J ";
    }
    if(Q[2]>=Q[0] && Q[2]>=Q[1]) {
            cout<<"B ";
    }
    if(P[0]>=P[1] && P[0]>P[2]) {
            cout<<"C";
    }
    if(P[1]>P[0] && P[1]>P[2]) {
            cout<<"J";
    }
    if(P[2]>=P[0] && P[2]>=P[1]) {
            cout<<"B";
    }
    return 0;
}
