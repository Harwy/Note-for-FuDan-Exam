#include<cstdio>

const int maxn = 210;

int main(){
    int row, col; //ÐÐ£¬ÁÐ
    char a;
    scanf("%d %c", &col, &a);
    if(col % 2 == 0) row = col /2;
    else row = col/2 +1;
    //1
    for(int i = 0; i < col; i++){
        printf("%c", a);
    }
    printf("\n");
    //2~col-1
    for(int i = 1; i < row-1; i++){
        printf("%c", a);
        for(int k = 1; k < col-1; k++)
            printf(" ");
        printf("%c\n", a);
    }
    // col
    for(int i = 0; i < col; i++){
        printf("%c", a);
    }
    printf("\n");
    return 0;
}
