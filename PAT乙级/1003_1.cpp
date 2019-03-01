#include<iostream>
#include<cmath>
int main()
{
  using namespace std;
  int m,n,count = 0;
  cin >> m >> n;
  for (int i = 2;count <= n;i++)
  {
    int temp = 0;
    for (int j = 2;j <= sqrt(i);j++)
      if (i % j == 0)
        ++temp;
    if (temp == 0)
      ++count;
    if (count >= m && count <= n && temp == 0)
    {
      cout << i;
      if ((count - m) % 10 == 9)
        cout << endl;
      else if (count != n)
        cout << " ";
    }
  }
  cout << endl;
  return 0;
}
