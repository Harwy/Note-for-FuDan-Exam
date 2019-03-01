/*
hashTable[10] 表示0~9数字的个数

*/
#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    int hashTable[10];
    for(int i=0;i<10;i++){
        scanf("%d", &hashTable[i]);
    }
    for(int i=1;i<10;i++){
        if(hashTable[i] > 0){
            printf("%d", i);
            hashTable[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<hashTable[i];j++){
            printf("%d", i);
        }
    }
    return 0;
}
