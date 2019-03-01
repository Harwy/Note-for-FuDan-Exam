链接：https://www.nowcoder.com/questionTerminal/7335f56d49e946c2a7cd2a93661b293b
来源：牛客网

#include<iostream>
#include<string>
using std::string;
using namespace std;

int main()
{
    string a, b, c, d;
    string date[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
    int count = 0, m[2] = {-1}, n;
    cin >> a >> b >> c >> d;
    for (int i = 0;i < 60 ;i++)
    {
        if ('A' <= a[i] && a[i] <= 'Z' && a[i] == b[i] && m[0]<0)
        {
            m[0] = a[i] - 'A' + 1;
            continue;
        }
        if (m[0] >= 0 && a[i]==b[i])
        {
            if('A' <= a[i] && a[i] <= 'Z')
                m[1] = a[i] - 'A' + 10;
            else
                m[1] = a[i] - '0';
            break;
        }
    }
    for (int i = 0;i < 60;i++)
    {
        if ((('a' <= c[i] && c[i] <= 'z') || ('A' <= c[i] && c[i] <= 'Z')) && c[i] == d[i])
        {
            n = i;
            break;
        }
    }
    cout << date[m[0] - 1] << (m[1] < 10 ? " 0" : " ") << m[1]<< (n < 10 ? ":0" : ":") << n;
    return 0;
}
