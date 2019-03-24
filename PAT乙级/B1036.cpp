#include<cstdio>
const int maxn = 22;

int main(){
  int n; //列数
  int m; //行数
  char a;
  scanf("%d %c" , &n, &a);
  if(n%2 == 0) m = n/2;
  else m = n/2+1;
  for(int i = 0; i < m; i++){ //行
    for(int j = 0; j < n; j++){ //列
      if(i == 0 || i == m-1) printf("%c", a);
      else if(j == 0 || j == n-1) printf("%c", a);
      else printf(" ");
    }

    if(i < m-1) {
        printf("\n");
    }
  }
  return 0;
}
