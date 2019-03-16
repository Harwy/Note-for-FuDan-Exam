/*
Input:
10x-2x-8=4x+7+x
Output:
x=5

change:
10-2-8=4+7+
*/
#include<stdio.h>
#include<algorithm>
#include<string>
#include<iostream>
#include<queue>
using namespace std;
const int maxn = 200;

struct node{
    double x;
    double b;
};

queue<double> q, qx; //常数队列和x队列
char cal[maxn];
int x[maxn] = {0};
int number = 0;
int d=0;


int main() {
	string str;
	cin >> str;
	double temp = 0;
	int flag = 1;
	int c = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= '0'&&str[i] <= '9') {
			temp = 10 * temp + str[i] - '0';
		}else if (str[i] == 'x') {
			if(str[i-1] == '+' || str[i-1] == '=' || str[i-1] == '-'){
                q.push(1);
			}else{
                q.push(temp);
			}
			qx.push(1);
			temp = 0;
		}else{
		    cal[c++] = str[i];
		    if(str[i-1] >= '0'&&str[i-1] <= '9') {
                    q.push(temp);
                    qx.push(0);
            }
            temp = 0;
        }
	}
    double x=0, b=0;
	while(!q.empty()){
        if(qx.front() == 1){
            x +=
        }else{

        }
        q.front();
        q.pop();
	}
	for(int i = 0; i < c; i++){
        printf("%c\n", cal[i]);
	}
//	if (a != 0) {
//		printf("x=%d\n", b / a);
//	}
//	else if (b != 0) {
//		printf("no solution\n");
//	}
//	else {
//		printf("infinite solutions\n");
//	}
	system("pause");
	return 0;
}
