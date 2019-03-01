# 算法笔记目录
[1-黑盒测试——2019.02.27](#jump0227)

[2-还没想好标题——2019.02.28](#jump0228)

[3-贪心算法——2019.03.01](#jump0301)

[备注](#beizhu)


----
----
<span id = "jump0227"><h1>//2019.02.27</h1></span>

## 一.黑盒测试：

+ 1.单点测试

+ 2.多点测试

### 1.单点测试



### 2.多点测试

程序一次能通过所有数据测试，要求读取到文件末尾

(1)while...EOF型

```
    while(scanf("%d", &n) != EOF){
        ...
    }
    while(scanf("%s", str) != EOF){
        ...
    }
    while(gets(str) != NULL){
        ...
    }
```

---------------------------------------------------------

(2)while...break型(额外判断a,b条件)

```
    while(scanf("%d%d", &a, &b), a || b){
        ...
    }
```

---------------------------------------------------------

(3)while(T--)型(给定T组数据)

```
    int T;
    scanf("%d", &T);
    while(T--){
        scanf("%d%d", &a, &b);
        ...
    }
```

---------------------------------------------------------


<span id = "jump0228"><h1>//2019.02.28</h1></span>


---

<span id = "jump0227"><h1>//2019.02.27</h1></span>

# 贪心算法

## 1.简单贪心

* 简单贪心问题实质是排序问题

## 2.区间贪心

[区间贪心示例](区间贪心.cpp)

---

<span id = "beizhu"><h1>备注</h1></span>

MarkDown跳转锚的使用方法：

首先是建立一个跳转的连接：

```
[ 说明文字 ](# jump )

然后标记要跳转到的位置：

< span i d = " jump "> 跳转到的位置 </span>
```

---

预览MD文件：CTRL+SHIFT+V

---


模板

/*


*/

```
#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){


    return 0;

}
```# Note
# Note-for-FuDan-Exam
# Note-for-FuDan-Exam
