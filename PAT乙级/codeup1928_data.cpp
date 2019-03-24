/**
20130101
20130105
*/

#include<cstdio>
int month[13][2] = { //平年和闰年
  {0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
};

//判断平年和闰年
bool isYear(int year){
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main(){
    int time1,y1,m1,d1;
    int time2 = 20190205,y2,m2,d2;
    int ans=1;
    scanf("%d", &time1);
    if(time1 > time2){
        int temp = time1;
        time1 = time2;
        time2 = temp;
    } // time1 < time2
    y1 = time1 / 10000; m1 = time1 %10000 / 100; d1 = time1%100;
    y2 = time2 / 10000; m2 = time2 %10000 / 100; d2 = time2%100;
    while(y1<y2 || m1<m2 || d1<d2){
        d1++;
        if(d1 == month[m1][isYear(y1)] + 1){
            m1++;
            d1=1;
        }
        if(m1 == 13){
            y1++;
            m1=1;
        }
        ans++;
    }
    printf("%d\n", ans);
    return 0;

}
