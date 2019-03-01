#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string m_minus(string a,string b){
    int result;
    result=stoi(a)-stoi(b);
    string temp=to_string(result);
    if(temp.size()<4)
        temp="0"+temp;
    return temp;
}

 int main(){
     string str;
     cin>>str;
     while(str.size()<4)
         str+="0";
     string max=str,min=str;
     sort(min.begin(),min.end());
     sort(max.begin(),max.end());
     reverse(max.begin(),max.end());
     if(max==min)
         cout<<max<<" - "<<max<<" = "<<"0000";
     else {
         while(m_minus(max,min)!="6174"){
             string temp=m_minus(max,min);
             cout<<max<<" - "<<min<<" = "<<temp<<endl;
             max=temp,min=temp;
             sort(min.begin(),min.end());
             sort(max.begin(),max.end());
             reverse(max.begin(),max.end());
         }
          cout<<max<<" - "<<min<<" = "<<m_minus(max,min)<<endl;
     }
}
