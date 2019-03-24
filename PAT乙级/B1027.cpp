/**
换算问题

*/
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 15;

struct money{
    int Galleon;
    int Sickle;
    int Knut;
}m1, m2;

int main(){
    scanf("%d.%d.%d %d.%d.%d", &m1.Galleon, &m1.Knut, &m1.Sickle, &m2.Galleon, &m2.Knut, &m2.Sickle);
    if(m1.Galleon > m2.Galleon){
        printf("-");
        swap(m1, m2);
    }
    m1.Galleon = m2.Galleon - m1.Galleon;
    m1.Knut = m2.Knut-m1.Knut;
    m1.Sickle = m2.Sickle - m1.Sickle;
    while(m1.Sickle < 0){
        m1.Knut--;
        m1.Sickle += 29;
    }
    while(m1.Knut < 0){
        m1.Galleon--;
        m1.Knut += 17;
    }

    printf("%d.%d.%d", m1.Galleon, m1.Knut, m1.Sickle);
    return 0;
}
