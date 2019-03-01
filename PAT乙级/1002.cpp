#include <stdio.h>
int main() {
	int N;
	int a[1000];
	int A1,A2,A3,A4,A5;
	A1 = A2 = A3 = A4 = A5 = 0;
	int num = 0;
	double A4ave;
	int flag = -1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N; i++) {
		switch (a[i] % 5) {
		case 0:
			if (a[i] % 2 == 0)
				A1 += a[i];
			break;
		case 1:
			flag = -1*flag;
			A2 += flag*a[i];
			break;
		case 2:
			A3++;
			break;
		case 3:
			A4 += a[i];
			num++;
			break;
		case 4:
			if (a[i] > A5)
				A5 = a[i];
			break;
		default:
			break;
		}
	}
    A4ave = 1.0*A4 / num;
	if(A1!=0){
        printf("%d ",A1);
    }else{
        printf("N ");
    }
    if(A2!=0){
        printf("%d ",A2);
    }else{
        printf("N ");
    }
    if(A3!=0){
        printf("%d ",A3);
    }else{
        printf("N ");
    }
    if(num!=0){
        printf("%.1f ",A4ave);
    }else{
        printf("N ");
    }
    if(A5!=0){
        printf("%d",A5);
    }else{
        printf("N");
    }
	return 0;
}
