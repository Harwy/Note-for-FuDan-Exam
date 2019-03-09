/*
栈的应用
容量为M的栈，分别把1~n依次入栈，给出一系列出栈顺序，问出栈顺序可能性
*/
#include<stdio.h>
#include<stack>
using namespace std;

const int maxn = 1010;
int arr[maxn];  // 题目的出栈顺序
stack<int> st;
int main(){
    int m,n,T;
    scanf("%d%d%d", &m, &n, &T);
    while(T--){  // 循环执行T次
        while(!st.empty()){  // 清空堆栈
            st.pop();
        }
        for(int i=1;i<=n;i++){
            scanf("%d", &arr[i]);
        }
        int current = 1; // 指向出栈序列中代出栈元素
        bool flag = true;
        for(int i=1;i<=n;i++){
            st.push(i);
            if(st.size() > m){
                flag = false;
                break;
            }
            // 若栈顶元素与出栈序列相同时
            while(!st.empty() && st.top() == arr[current]){
                st.pop();
                current++;
            }

        }
        if (st.empty() == true && flag == true) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }


    }

    return 0;
}
