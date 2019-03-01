/*
0001~9999四位正整数
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str;
    string temp;
    cin>>str;
    while(str.size()<4)
        str+="0";
    string max=str,min=str;
    sort(min.begin(),min.end());
    sort(max.begin(),max.end());
    reverse(max.begin(),max.end());
    if(max==min)
        cout<<max<<" - "<<max<<" = "<<"0000"<<endl;
    else{
        do{
            int result;
            result = stoi(max) - stoi(min);
            temp = to_string(result);
            if(temp.size()<4)
                temp+="0";
            cout<<max<<" - "<<min<<" = "<<temp<<endl;
            max=temp,min=temp;
            sort(min.begin(),min.end());
            sort(max.begin(),max.end());
            reverse(max.begin(),max.end());
        }while(temp!="6174");
    }
    return 0;
}
