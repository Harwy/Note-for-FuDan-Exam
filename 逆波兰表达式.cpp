/**
3
0 3 +
5
2 1 + 3 *
*/
#include<stdio.h>
#include<stack>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

int string_to_int(string str){
        int flag = 1;
        int i = 0;
        int ans = 0;
        if(str[0] == '-') {
            flag = -1;
            i = 1;
        }
        for(i;i<str.size(); i++){
            ans = ans*10 + str[i] - '0';
        }
        return ans*flag;

}

int main(){
    vector<string> tokens;
    string str;
    int n;
    scanf("%d", &n);
    for(int i = 0; i< n; i++){
        cin>>str; //cin 根据空格停止
        //scanf("%s", str);
        tokens.push_back(str);
    }
    if(tokens.size() == 1) printf("%d", string_to_int(tokens[0]));
    else{
        stack<int> st;
        for(int i = 0; i<tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                st.push(string_to_int(tokens[i]));
            }else{
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if(tokens[i] == "+"){
                    st.push(a+b);
                }else if(tokens[i] == "-"){
                    st.push(a-b);
                }else if(tokens[i] == "*"){
                    st.push(a*b);
                }else if(tokens[i] == "/"){
                    st.push(a/b);
                }
            }
        }
        printf("%d", st.top());
    }
    return 0;

}
