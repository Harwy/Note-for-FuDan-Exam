#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abcd123efg";
    str.erase(str.begin()+4,str.end()-3);
    cout<<str<<endl;
    str.insert(4,"567");
    str.erase(4,3);
    cout<<str<<endl;
    return 0;
}
