#include<stdio.h>
#include<vector>
using namespace std;
int main(){
    vector<int> vi;
    for(int i = 0; i < 5; i++)
    {
        vi.push_back(i);
    } // 数据添加，此时 0 1 2 3 4 
    vi.insert(vi.begin() + 2, -1);  // 在vi[2]的位置插入-1 
    for(int i=0;i<vi.size();i++){
        printf("%d ", vi[i]);
    }  // 数据，此时 0 1 -1 2 3 4 
    return 0;
}