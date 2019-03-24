#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

double catalan(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    int res = 0;
    for(int i = 0; i < n; i++){
        res += catalan(i)*catalan(n-i-1);
    }
    return res;
}

int main(){
//  double A,Ai,B,Bi;
//  scanf("%lf%lf%lf%lf", &A,&Ai,&B,&Bi );
//  double an = A*B-Ai*Bi;
//  double ai = A*Bi+B*Ai;
//  printf("%.2f%c%.2fi", an,(ai>0?'+':'-') ,abs(ai));
//    printf("%.2f", (2.3*5.2-3.5*0.4));

//    string str;
//    scanf("%s", str);
//    printf("%s", str);
//    scanf("%s", str);
//    printf("%s", str);

//    vector<int> q;
//    q.push_back(1);
//    q.push_back(5);
//    q.push_back(3);
//    sort(q.begin(), q.end());
//    for(int i = 0; i < q.size(); i++){
//        printf("%d ", q[i]);
//    }


    int n;
    cin>>n;
    for(int i = 0;i<=n;i++){
        cout<<catalan(i)<<endl;
    }


    return 0;
}
