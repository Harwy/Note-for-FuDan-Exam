/*
A~Z、a~z、0~9、_
26+26+10+1=63
*/
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
const int maxn = 1010;
const int ascII = 120;

struct node{
    int want;
}Node[ascII];

int main() {
    string str1;
    string str2;
    cin>>str1>>str2;
    int want = str2.size();
    int give = str1.size();
    int num = 0;
    //int last = 0;
    for(int i = 0; i < want; i++){
        int number = str2[i] - '0';
        Node[number].want++;
    } //需求列入
    for(int i = 0; i < give; i++){
        int number = str1[i] - '0';
        if(Node[number].want > 0){
            Node[number].want--;
            num++;
        }
    }
    if(num == want){
        printf("Yes %d", give - want);
    }else{
        printf("No %d", want - num);
    }
    return 0;
}
