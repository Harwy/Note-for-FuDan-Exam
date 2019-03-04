#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Thank you for your smile.";
    string str1 = "you";
    string str2 = "me";
    if(str.find(str1) != string::npos){
        cout<<str.find(str1)<<endl;
    }else{
        cout<<"Not find."<<endl;
    }
    if(str.find(str1, 7) != string::npos){
        cout<<str.find(str1, 7)<<endl;
    }else{
        cout<<"Not find."<<endl;
    }
    if(str.find(str2) != string::npos){
        cout<<str.find(str2)<<endl;
    }else{
        cout<<"Not find."<<endl;
    }
    return 0;
}