# 算法笔记目录
[1-黑盒测试——2019.02.27](#jump0227)

[2-还没想好标题——2019.02.28](#jump0228)

[3-贪心算法/查找——2019.03.01](#jump0301)

[4-排序——2019.03.02](#jump-sort)
* 归并排序

[5-STL库学习——2019.03.02](#jump-stl)

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

```C++
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

```C++
    while(scanf("%d%d", &a, &b), a || b){
        ...
    }
```

---------------------------------------------------------

(3)while(T--)型(给定T组数据)

```C++
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

[练习1-答案](practiseBox/tanxin_001.cpp)

---
# 查找

## 1.二分查找

* 严格有序下查找

[ [练习1-sqrt(2)的近似值] ](practiseBox/search_001.cpp)

### >技巧：two pointers
>序列递增条件下\
>若需要求a+b的和等于M的情况，不需要枚举所有情况（该情况下复杂度O(n^2)）\
>可使用两端向中间逼近的方法。[ [示例] ](practiseBox/two-point.cpp) \
>还可以方便的解决序列合并问题。







---

<span id = "jump-sort"><h1>4-排序</h1></span>

## 1. 归并排序

> 2-路归并排序

## 2. 快速排序

> 快速排序思想上是two pointers  
递归: [ [示例] ](practiseBox/quickSort_1.cpp)  
非递归：[ [示例] ](practiseBox/quickSort_2.cpp) 
---

<span id = "jump-stl"><h1>5-STL库学习</h1></span>

> C++提供的标准模板库
---
## 1.vector
> vector(向量)，变长数组  [ [示例] ](practiseBox/vector.cpp)  

``` C++
// 头文件
#include<vector>
using namespace std;
// 定义vector
vector<typename> name;
// 定义vector数组
vector<typename> Arrayname[arraySize];
vector<int> vi[100];
```
> 访问方式：  
> 1. vi[i]
> 2. 迭代器it vector< int > :: iterator it = vi.begin();   
>    *(it + i) 访问  

### vector常用函数实例解析
* push_back(i); 在vector后面添加一个数据i ，时间复杂度O(1)
* pop_back( );  删除vector的尾元素，时间复杂度O(1)
* size( );  获取vector中元素的个数，返回unsigned类型，一般用%d 问题不大，时间复杂度O(1)
* clear( ); 清空vector中所有元素，时间复杂度O(N)
* insert(it, x) 向vector的任意迭代器it处插入一个元素x，时间复杂度O(N)  [ [示例-insert用法] ](practiseBox/vector-insert.cpp)
* erase( ) [ [示例-erase用法] ](practiseBox/vector-erase.cpp)
    * 1.删除单个元素  
        erase(it) 删除迭代器为it处的元素  
    * 2.删除一个区间内的所有元素  
        erase(first, last); 删除[first, last)内的所有元素
* begin( );  end( );  左闭右开，取不到end末尾
(i);
* vector的常见用途  
    * (1)存储数据，动态的数组
    * (2)用邻接表存储图  详见《算法笔记》-10.2.2节
* PS：所有常用函数都是在vector实例化下使用，即例如： vi.push_back
---

## 2.set
> set,集合，内部自动有序且不含重复元素的容器
```C++
// 头文件
#include<set>
using namespace std;
// 定义
set<typename> name;
set<int> name;
set<double> name;
set<char> name;
set<node> name; // node是结构体的类型
// set数组
set<int> a[100];
// 访问方式
/* 仅能通过迭代器访问 */
set<int>::iterator it;  
```
PS：除了vector和string之外的STL容器都不支持*(it + i)的访问方式，因此只能枚举：[ [示例-set访问] ](practiseBox/set.cpp),set内元素自动递增，且无重复。

### set常用函数实例解析
* insert( ) 插入元素，时间复杂度O(logN)
```C++
st.insert(x); // 将x插入set容器，自动递增排序和去重
```
* find( ) 查找元素
```C++
st.find(value); // 返回set中对应值为value的迭代器，时间复杂度O(logN)
// 表达1：
set<int>::iterator it = st.find(2);
printf("%d", *it);
// 表达2:
printf("%d", *(st.find(2)) );
```
* erase( ) [ [示例-set删除] ](practiseBox/set-erase.cpp)
    * 删除单个元素
    > 删除本身操作时间复杂度为O(1),但需要查找是否存在该数据，因此时间复杂度为O(logN).
    ```C++
    st.erase(st.find(100));  // 找到100，然后删除
    st.erase(200);
    ```
    * 删除一个区间所有元素

    ```C++
    st.erase(first, last);  // 删除一个区间内所有元素，复杂度为O(last - first)
    st.erase(st.find(30), st.end()); // 删除30至末尾的元素
    ```
* size() 获取set内元素个数，时间复杂度为O(1)
* clear() 清空set中所有元素，时间复杂度为O(N)
* set的常见用途
    * 去重和自动升序排列

---


## 3.string

---

## 4.map

---

## 5.queue

---

## 6.priority_queue

---

## 7.stack

---

## 8.pair

---

## 9.algorithm

---

<span id = "jump-math"><h1>6-数学问题——2019.03.02</h1></span>

## 1.最大公约数/最小公倍数
> 最大公约数：辗转相除法（gcd函数）[ [示例] ](practiseBox/gcd.cpp)

> 最小公倍数：在得到最大公约数d之后，最小公倍数为a / d * b（lcm函数）

## 2.分数四则运算
> 分数表示结构体Fraction[ [示例] ](practiseBox/fraction.cpp)[未完工，进度10%]


## 3.素数
> 素数，又质数，除了1和本身之外不能被其他数整除。  
> 1既不是素数也不是合数。
> * 判断是否是素数。[ [示例] ](practiseBox/isPrime.cpp)
> * 快速得到1~n内的素数表。[ [示例] ](practiseBox/isPrime.cpp)

## 4.质因子分解
## 5.大整数运算
## 6.组合数

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

```C++
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
