#include<stdio.h>

using namespace std;

//公式法  C(n,m)=n!/(m!*(n-m)!) [n<=20条件下]
long long C(long long n, long long m){
    long long ans = 1;
    for(long long i = 1; i <= n; i++){
        ans *= i;
    }
    for(long long i = 1; i <= m; i++){
        ans /= i;
    }
    for(long long i = 1; i <= n-m; i++){
        ans /= i;
    }
    return ans;
}

//递推
long long C1(long long n, long long m){
    if(m == 0 || m == n) return 1;
    return C1(n-1, m-1) + C1(n-1, m);
}

//定义变形
long long C2(long long n, long long m){
    long long ans = 1;
    for(long long i = 1; i <= m; i++){
        ans = ans *(n-m+i) / i;
    }
    return ans;
}


int main(){
    int n = 9;
    long long ans1 = C(2*n, n);
    long long ans2 = C1(2*n, n);
    long long ans3 = C2(2*n, n);
    printf("%lld %lld %lld\n", ans1/(n+1), ans2/(n+1), ans3/(n+1));
    return 0;
}
