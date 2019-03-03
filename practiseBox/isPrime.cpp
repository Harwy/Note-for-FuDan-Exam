#include<math.h>  // 法1：math.h中有sqrt(n) 根号n
// 法2：使用n/2判断

bool isPrime(int n){
    if(n <= 1) return false;
    int sqr = (int)sqrt(1.0 * n);
    for(int i=2;i<=sqr;i++){
        if(n % i == 0) return false;
    }
    return true;
}