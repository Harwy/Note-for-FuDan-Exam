#include<stdio.h>
struct stu{
    int id;
    int g1;
    int g2;
}stu[100000];

int main(){
    int N,L,H;
    scanf("%d",&N);
    scanf("%d",&L);
    scanf("%d",&H);
    for(int i=0;i<N;i++){
        scanf("%d %d %d",&stu[i].id,&stu[i].g1,&stu[i].g2);
    }
    for(int i=0;i<N;i++){
        printf("%d %d %d\n",stu[i].id,stu[i].g1,stu[i].g2);
    }
    return 0;
}
