# 算法笔记目录
[1-黑盒测试——2019.02.27](#jump0227)

[2-还没想好标题——2019.02.28](#jump0228)

[3-贪心算法/查找——2019.03.01](#jump0301)

[4-排序——2019.03.02](#jump-sort)
* 归并排序

[5-STL库学习——2019.03.02](#jump-STL)

[6-数学问题——2019.03.02](#jump-math)
* 最大公约数/最小公倍数
* 分数四则运算
* 素数
* 质因子分解
* 大整数运算
* 组合数



[备注](#beizhu)

### 作者PS：
> / 2019.03.01 完成与github的对接&重新细分目录

----
----
<span id = "jump0227"><h1>1-黑盒测试——2019.02.27</h1></span>

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


<span id = "jump0228"><h1>2-还没想好标题-2019.02.28</h1></span>

>\
> 这人很懒什么也没有留 \
>![图片-绿谷](绿谷.png)


---

<span id = "jump0301"><h1>3-贪心算法/查找  —— 2019.03.01</h1></span>

# 贪心算法

## 1.简单贪心

* 简单贪心问题实质是排序问题

## 2.区间贪心

区间贪心 最大的问题是要把 *整体最优转化为部分最优* 来解决

[区间贪心示例](区间贪心.cpp)

[练习1-看电视](http://codeup.cn/problem.php?cid=100000584&pid=0)

[练习1-答案](练习题\tanxin_001.cpp)

---
# 查找

## 1.二分查找

* 严格有序下查找

[练习1-sqrt(2)的近似值](练习题\search_001.cpp)

### >技巧：two pointers
>序列递增条件下\
>若需要求a+b的和等于M的情况，不需要枚举所有情况（该情况下复杂度O(n^2)）\
>可使用两端向中间逼近的方法。[示例](练习题\two-point.cpp) \
>还可以方便的解决序列合并问题。







---

<span id = "jump-sort"><h1>4-排序</h1></span>

## 1. 归并排序

> 2-路归并排序

## 2. 快速排序

> 快速排序思想上是two pointers  
递归: [示例](练习题\quickSort_1.cpp)  
非递归：[示例](练习题\quickSort_2.cpp) 
---

<span id = "jump-STL"><h1>5-STL库学习</h1></span>

---

<span id = "jump-math"><h1>6-数学问题——2019.03.02</h1></span>



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
