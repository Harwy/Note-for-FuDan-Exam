#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abcd";
    string str2 = "xyz";
    printf("the size of str: %d\n", str.length());
    str.insert(3, str2);
    cout<<str<<endl;
    str.insert(str.begin() + 3, str2.begin(), str2.end());
    cout<<str<<endl;
    return 0;
}
