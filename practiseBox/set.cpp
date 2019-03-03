#include<stdio.h>
#include<set>
using namespace std;

int main(){
    set<int> st;
    st.insert(3);
    st.insert(5);
    st.insert(2);
    st.insert(3);
    // 注意，不支持it < st.end()的写法
    for(set<int>::iterator it = st.begin(); it != st.end(); it++){
        printf("%d ", *it);
    }
    return 0;
}