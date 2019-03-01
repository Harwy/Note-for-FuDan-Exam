/*
	在有序的10个数据中插入一个新数据，使有序
*/
#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	int a[11];
	int cmp;
	for (int i = 0; i < 11; i++) {
		//cin>>a[i];
		scanf("%d", &a[i]);
	}
	for (int i = 9; i >= 0; i--) {
		if (a[i] > a[i + 1]) {
			cmp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = cmp;
		}
	}
	for (int i = 0; i < 11; i++) {
		//cout<<a[i]<<endl;
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;

}