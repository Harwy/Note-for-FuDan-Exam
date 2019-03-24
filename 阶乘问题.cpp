#include<cstdio>
//计算C(n, m) C(n, m) = C(n-1, m) + C(n-1, m-1)
const int n = 60;
long long res[67][67] = {0};

long long C( long long n,  long long m){
    if(m == 0 || n == m) return 1;
    return C(n-1, m) + C(n-1, m-1);
}


void calC(){
    for(int i=0; i<=n; i++){
        res[i][0] = res[i][i] = 1; //初始化边界
    }
    for(int i=2;i<=n;i++){
        for(int j=0; j<=i/2; j++){
            res[i][j] = res[i-1][j] + res[i-1][j-1];
            res[i][i-j] = res[i][j];
        }
    }
}

int main(){
    int number;
    scanf("%d", &number);
    printf("%lld\n", C(2*number,number)/(number+1));   // 67左右能用，超过不行
    calC();
    for(int i = 1; i <= number; i++){
        printf("%d %lld\n", i, res[2*i][i]/(i+1));
    }

    //printf("%lld\n", res[2*number][number]/(number+1) );
    return 0;
}

