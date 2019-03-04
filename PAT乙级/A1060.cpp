/*
N < 100
A,B < 10^100

 INPUT: N A B
OUTPUT:
    YES 
    NO
情况1： 0.001
情况2： 132.01
情况3： 0000
*/

#include<iostream>
#include<string>
using namespace std;

int n; // 有效位数

string deal(string s, int& e){
    int k = 0; // s的下标
    while(s.length() > 0 && s[0] == '0'){
        s.erase(s.begin());
    }
    if(s[0] == '.'){ // s是小数
        s.erase(s.begin());
        while(s.length() > 0 && s[0] == '0'){
            s.erase(s.begin());
            e--;
        }
    }else{ // s不是小数，去掉小数点
        while(k < s.length() && s[k] != '.'){ // 寻找小数点
            k++;
            e++;
        }
        if(k < s.length()){
            s.erase(s.begin() + k);
        }
    }
    if(s.length() == 0){  // 该数字为0
        e = 0;
    }
    int num = 0;
    k=0;
    string res;
    while(num < n){
        if(k < s.length()) res += s[k++];
        else res += '0';
        num++;
    }
    return res;
}

int main(){
    string A,B;
    cin>>n>>A>>B;
    int e1=0,e2=0;
    string s1 = deal(A, e1);
    string s2 = deal(B, e2);
    if(s1 == s2 && e1 == e2){
        cout<< "YES 0." << s1<<"*10^"<<e1<<endl;
    }else{
        cout<< "NO 0."<<s1<<"*10^"<<e1<<" 0."<<s2<<"*10^"<<e2<<endl;
    }
    return 0;
}