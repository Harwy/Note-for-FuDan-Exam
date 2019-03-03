#include<stdio.h>
#include<vector>
using namespace std;


int main(){
    vector<int> vi;
    for(int i=0;i<=5;i++){
        vi.push_back(i);
    }
    vector<int>::iterator it = vi.begin();
    for(int i=0;i<=5;i++){
        printf("%d ", *(it + i));
    }
    for(int i=0;i<=5;i++){
        printf("%d ", *(vi.begin() + i));
    }
    for(int i=0;i<=5;i++){
        printf("%d ", vi[i]);
    }
    // vector的迭代器不支持it < vi.end()的写法，因此用!=
    for(vector<int>::iterator it = vi.begin(); it != vi.end(); it++){
        printf("%d ", *it);
    }
    return 0;
}
