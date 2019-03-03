#include<stdio.h>
#include<set>
using namespace std;
int main(){
    set<int> st;
    st.insert(100);
    st.insert(200);
    st.erase(100);
    for(set<int>::iterator it = st.begin(); it != st.end(); it++){
        printf("%d\n", *it);
    }
    printf("------------\n");
    st.insert(20);
    st.insert(30);
    st.insert(10);
    st.insert(50);
    set<int>::iterator it = st.find(30);
    st.erase(it, st.end());
    for(set<int>::iterator it = st.begin(); it != st.end(); it++){
        printf("%d\n", *it);
    }
    return 0;

}