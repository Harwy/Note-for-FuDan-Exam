#include<stdio.h>
#include<vector>
using namespace std;
int main(){
    vector<int> vi;
    for(int i = 5; i <= 9; i++)
    {
        vi.push_back(i);
    } // 数据添加，此时 5 6 7 8 9
    vi.erase(vi.begin() + 3);  // 在vi[3]的位置移除数据
    for(int i=0;i<vi.size();i++){
        printf("%d ", vi[i]);
    }  // 数据，此时 5 6 7 9
    for(int i = 10; i <= 15; i++)
    {
        vi.push_back(i);
    } // 数据添加，此时 5 6 7 9 10 11 12 13 14 15
    vi.erase(vi.begin() + 4, vi.begin() + 7); // 移除 vi[4]~vi[6]
    for(int i=0;i<vi.size();i++){
        printf("%d ", vi[i]);
    }  // 数据，此时 5 6 7 9 13 14 15
    return 0;
}
