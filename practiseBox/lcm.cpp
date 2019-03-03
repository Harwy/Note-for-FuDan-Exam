int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a%b);
}
/* 最小公倍数在最大公倍数基础上计算得 */
int lcm(int a, int b){
    int d = gcd(a, b);
    return a / d * b;
}