/* ¼ÆËãcatalanÊıº¯Êı */

#include <stdio.h>

unsigned long long catalannumber1(int n)
{
    if(n == 0)
        return 1;
    else
        return (4 * n - 2) * catalannumber1(n-1) / (n + 1);
}

unsigned long long catalannumber2(int n)
{
    unsigned long long cn = 1;
    int i;

    for(i=1; i<=n; i++)
        cn = (4 * i - 2) * cn / (i + 1);

    return cn;
}

int main(void)
{
    int i;

    for(i=0; i<=30; i++)
        printf("%d %lld %lld\n", i, catalannumber1(i), catalannumber2(i));

    return 0;
}
