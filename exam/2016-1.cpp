/**
��ϰstring���ַ���
string::npos = -1
string.substr(i, j)  ��i��jλ���Ӵ�
string.find(str)  ��string�в����Ƿ���str:���򷵻ص�һ��ƥ���ַ������ֵ�λ�ã�û���򷵻�-1��string::npos

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
