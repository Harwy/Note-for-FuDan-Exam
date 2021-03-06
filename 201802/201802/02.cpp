#include<stdio.h>
#include<algorithm>
#include<string>
#include<iostream>
#include<queue>
using namespace std;
const int maxn = 200;

int x[maxn] = { 0 };
double math[maxn];
int number = 0;


int main() {
	fill(math, math + maxn, 1);
	string str;
	cin >> str;
	double temp = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= '0'&&str[i] <= '9') {
			temp = 10 * temp + str[i] - '0';
		}
		else if (str[i] == 'x') {
			x[number] = 1; //当前数为x系数
		}
		else {
			if (temp == 0 && x[number] == 1) { temp = 1; }
			math[number] *= temp;
			temp = 0;
		}
		number++;
		if (str[i] == '-') {
			math[number] *= -1;
		}
		if (str[i] == '=') {
			for (int j = 0; j < number; j++) {
				math[number] *= -1;
			}
		}
	}
	//math[number++] = temp;
	double a = 0, b = 0;
	for (int j = 0; j < number; j++) {
		if (x[j] == 1) {
			a += math[j];
		}
		else {
			b += math[j];
		}
	}
	a = -1 * a;
	printf("%f %f\n", a, b);
	if (a != 0) {
		printf("x=%f\n", b/a);
	}
	else if (b != 0) {
		printf("no solution\n");
	}
	else {
		printf("infinite solutions\n");
	}
	system("pause");
	return 0;
}
