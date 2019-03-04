#include<stdio.h>
// 头文件
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    for(int i=1;i<=5;i++){
        st.push(i);  // 入栈
    }
    // 访问栈顶元素
    printf("top is : %d\n", st.top() );
    // 栈大小
    printf("stack's size : %d\n", st.size() );
    // 出栈
    while(st.empty() != true){
        printf("Now top is : %d\n", st.top() );
        st.pop();
    }
    return 0;
}
