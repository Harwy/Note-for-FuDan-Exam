#include<stdio.h>
#include<map>
using namespace std;

int main(){
    map<char, int> mp;
    mp['a'] = 10;
    mp['b'] = 20;
    mp['c'] = 30;
    map<char, int>::iterator it = mp.find('b'); // 查找
    printf("%c %d\n", it->first, it->second);
    printf("%d\n", mp.size());
    for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++){
        printf("%c %d\n", it->first, it->second);
    }
    mp.erase(mp.begin());
    for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++){
        printf("%c %d\n", it->first, it->second);
    }
    printf("%d %d", mp.find('b')->second, mp.find('d')->second);
    return 0;
}
