#include<stdio.h>
#include<string.h>
int main(){
    char A1[60],A2[60],B1[60],B2[60],DAY[4];
    int s[3];
    int n=0;
    scanf("%s",A1);
    scanf("%s",A2);
    scanf("%s",B1);
    scanf("%s",B2);
    for(int i=0;i<strlen(A1);i++){
        if(A1[i]==A2[i]){
            if(A1[i]>='A'&&A1[i]<='Z' && n==0){
                s[n++]=A1[i]-'A'+1;
                continue;
            }
            if(A1[i]>='0'&&A1[i]<='9' && n==1){
                s[n++]=A1[i]-'0';
                break;
            }
            if(A1[i]>='A'&&A1[i]<='N' && n==1){
                s[n++]=A1[i]-'A'+10;
                break;
            }
        }
    }
    for(int i=0;i<strlen(B1);i++){
        if(B1[i]==B2[i]){
            if(B1[i]>='a'&&B1[i]<='z'){
                s[n++]=i;
                break;
            }
        }
    }
    switch(s[0]){
        case 1:strcpy(DAY,"MON");break;
        case 2:strcpy(DAY,"TUE");break;
        case 3:strcpy(DAY,"WED");break;
        case 4:strcpy(DAY,"THU");break;
        case 5:strcpy(DAY,"FRI");break;
        case 6:strcpy(DAY,"SAT");break;
        case 7:strcpy(DAY,"SUN");break;
        default:break;
    }
    printf("%s %02d:%02d",DAY,s[1],s[2]);
    return 0;
}

