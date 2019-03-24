/**
复习string各种方法
string::npos = -1
string.substr(i, j)  从i到j位的子串
string.find(str)  在string中查找是否有str:有则返回第一个匹配字符串出现的位置，没有则返回-1或string::npos

*/
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1, str2;
    cin>>str1>>str2;
    int len = 0;
    for(int i = 0; i < str1.size()-1; i++){
        for(int j = i+1; j < str1.size(); j++){
            if(str2.find(str1.substr(i, j)) != string::npos){
                len = max(len, j - i + 1);
            }
        }
    }
    printf("%d\n", len);
    return 0;
}
