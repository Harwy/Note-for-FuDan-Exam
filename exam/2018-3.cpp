
#include<stdio.h>

const int MAXN = 10010;

long long dp[MAXN];

long long F(int n){
    if(n == 1) return 1; //�ݹ�߽�
    if(n == 2) return 2;
    if(dp[n] != 0) return dp[n]; // �Ѿ��������ֱ�ӷ��ؽ���������ظ�����
    else{
        dp[n] = F(n-1) + F(n-2); //����F(n)������dp
        return dp[n]; // ����F(n)�Ľ��
    }
}

int main(){
    int n;
    scanf("%d", &n);
    long long L = F(n);
    printf("%lld", L);
    return 0;
}
