# <span id = "top">-</span>算法笔记目录  
[1-黑盒测试——2019.02.27](#jump0227)

[2-还没想好标题——2019.02.28](#jump0228)

[3-贪心算法/查找——2019.03.01](#jump0301)

[施工中] [4-排序——2019.03.02](#jump-sort)
* 归并排序

[5-STL库学习——2019.03.04](#jump-stl)
* [->](#vector) vector 
* [->](#set) set  
* [->](#string) string 
* [->](#map) map 
* [->](#queue) queue 
* [->](#priority_queue) priority_queue 
* [->](#stack) stack 
* [->](#pair) pair 
* [->](#algorithm) algorithm 


[6-数学问题——2019.03.02](#jump-math)
* 最大公约数/最小公倍数
* 分数四则运算
* 素数
* 质因子分解
* 大整数运算
* 组合数

[施工中] [7-数据结构——2019.03.04](#jump-studyup)(内容极其庞大)

[施工中] [8-动态规划]()

[施工中] [9-字符串进阶]()

[备注](#beizhu)

### 作者PS：
> / 2019.03.01 完成与github的对接&重新细分目录  
> / 2019.03.03 在window下路径为"a\b.cpp"，但在github上路径为"a/b.cpp",予以修正  
> / 2019.04.04 更新全部目录，天呐还有好多内容。。。在2周时间内能够学完么？

---
![图片-咕咕咕](咕咕咕.gif)  
咕咕咕~正文开始

----

<span id = "jump0227"><h1>[☝](#top) 1-黑盒测试——2019.02.27</h1></span>

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


<span id = "jump0228"><h1>[☝](#top) 2-还没想好标题-2019.02.28</h1></span>

>\
> 这人很懒什么也没有留 \
>![图片-绿谷](绿谷.png)


---

<span id = "jump0301"><h1>[☝](#top) 3-贪心算法/查找  —— 2019.03.01</h1></span>

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

<span id = "jump-sort"><h1>[☝](#top) 4-排序</h1></span>

## 1. 归并排序    [施工中]

> 2-路归并排序

## 2. 快速排序

> 快速排序思想上是two pointers  
递归: [ [示例] ](practiseBox/quickSort_1.cpp)  
非递归：[ [示例] ](practiseBox/quickSort_2.cpp) 
---





<span id = "jump-stl"><h1>[☝](#top) 5-STL库学习</h1></span>

> C++提供的标准模板库

---

## 1.vector <span id = "vector">-[☝](#top) </span>


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

---

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

## 2.set <span id = "set">-[☝](#top) </span>


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

---

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


## 3.string <span id = "string">-[☝](#top) </span>


> C语言中使用字符数组char str[]存放字符串，但是操作十分麻烦。  
> C++中加入了string类型
```C++
// C++头文件
#include<string>
using namespace std;
// 定义
string str;
string str = "abcd";  // 初始化赋值
// 访问
// (1)通过下标访问
string str;
printf("%c",str[i]);  // 输出单个字符
printf("%s",str.c_str() ); // 将string类型转化为字符数组
cin>>str;  // 读入
cout<<str;  // 输出
// (2)通过迭代器访问,没有参数
string::iterator it;
```
[ [示例-string迭代器访问] ](practiseBox/string.cpp)

---

### string常用函数实例解析
* operator+=  
string的加法，将2个string直接拼接
    ```C++
    string str1="abc", str2="xyz",str3;
    str3 = str1 + str2;
    str1 += str2;
    ```
* compare operator  
 两个string类型可以直接使用== 、！=、<、<=、 => 、>比较大小，比较规则为 **字典序**
    ```C++
    if(str1 < str2) printf("OK1\n");
    ```

* length()/size()  
length()返回string的长度，即存放的字符数，时间复杂度为O(1)，size()与length()基本相同。
    ```C++
    str.length();
    str.size();
    ```

* insert()  [ [示例-string的insert用法] ](practiseBox/string-insert.cpp)  
string的insert()有多种写法。时间复杂度O(N).
    * insert(pos, string)  
    在pos号位置插入字符串string，这里pos指数字
    ```C++
    string str = "abcxyz";
    string str2 = "opq";
    str.insert(3, str2);  // 在str[3]处插入opq，得：abcopqxyz
    ```
    * insert(it, it2, it3)  
    串[it2,it3)插入到it位置上,这里it指string的迭代器
    ```C++
    string str = "abcxyz";
    string str2 = "opq";
    str.insert(str.begin() + 3, str2.begin(), str2.end());
    ```
* erase()  [ [示例-string的erase用法] ](practiseBox/string-erase.cpp)
    * 删除单个元素
    ```C++
    str.erase(str.begin() + 4);
    ```
    * 删除一个区域内所有元素
    ```C++
    // str.erase(first,last) 删除[first,last)内的元素
    str.erase(str.begin() + 2, str.end() + 1);
    // str.erase(pos,length) 删除pos开始length长度的元素
    str.erase(3,2);  
    ```

* clear()  
清空string中的数据，时间复杂度O(1)。
* substr()  
sub(pos, len)返回从pos号位开始，长度为len的子串，时间复杂度为O(len)
* string::npos  
string::npos是常数，本身值为-1，由于是unsigned_int类型，因此可认为是unsigned_int类型的最大值。用以作为find函数的失配返回值。
    ```C++
    if(string::npos == -1){
        cout<<"-1 is true."<<endl;
    }
    if(string::npos == 4294967295){
        cout<<"4294967295 is also true."<<endl;
    }
    ```

* find()  [ [示例-string的find用法] ](practiseBox/string-find.cpp)  
    * str.find(str2)，当str2是str的字串时，返回其在str中第一次出现的位置；否则，返回string::npos。  
    * str.find(str2, pos)，从str的pos号位开始匹配str2，返回值与上相同。
    * 时间复杂度为O(nm)，其中n和m分别为str和str2的长度。
    ```C++
    string str = "Thank you for your smile.";
    string str1 = "you";
    string str2 = "me";
    if(str.find(str1) != string::npos){ // str中是否有子串str1
        cout<<str.find(str1)<<endl;
    }else{
        cout<<"Not find."<<endl;
    }
    ```

* replace()  
    * str.replace(pos, len, str2) 把str从pos开始、长度为len的子串替换为str2.
    * str.replace(it1, it2, str2) 把str的迭代器[it1, it2)范围的子串替换为str2.
* PAT真题练习[ [例题-A1060 利用string解题] ](PAT乙级/A1060.cpp)

## 4.map <span id = "map">-[☝](#top) </span>


> map，映射。可以将任何基本类型映射到任何基本类型。  
> PS：无法用char数组作为键值，必须用string。  
> **map会以键从小到大的顺序自动排序。因map内部使用红黑树实现。（同set）**
```C++
// 头文件
#include<map>
using namespace std;
// 定义
map<typename1, typename2> mp;
map<string, int> mp; // 第一个是键的类型，第二个是值的类型
map<set<int>, string> mp;
// 访问方式
// (1)通过下标访问
map<char, int> mp;
mp['c'] = 20;  // mp['c'] = 20
mp['c'] = 30;  // 一一对应，被覆盖 mp['c'] = 30
// (2)通过迭代器访问
map<char, int>::iterator it = mp.begin();
it -> first;  // c
it -> second;  // 30
for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++){
    /*  code  */
}
```
---
### map常用函数实例分析  [ [示例-map使用] ](practiseBox/map.cpp)
* find()  
find(key)返回key的映射的迭代器，时间复杂度O(logN).
    ```C++
    map<char, int> mp;
    mp['a'] = 1;
    map<char, int>::iterator it = mp.find('a');
    it -> first; // a
    it -> second; // 1
    ```
* erase()  
有两种方法
    * 删除单个元素
        1. 按照迭代器删除
        ```C++
        mp.erase(it); // it为需要删除的迭代器
        // eg:
        mp['a'] = 1;
        mp['b'] = 2;
        map<char, int>::iterator it = mp.find('a');
        mp.erase(it); // 删除 b 2
        ```
        2. 按照映射的键删除

        ```C++
        mp.erase(key); // key为需要删除的映射的键
        // eg:
        mp['a'] = 1;
        mp['b'] = 2;
        mp.erase('b'); // 删除 b 2
        ```
    * 删除一个区间所有函数
    ```C++
    mp.erase(first, last); // first与last为迭代器，删除[first, last)范围内元素
    // eg:
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;
    map<char, int>::iterator it = mp.find('b');
    mp.erase(it, mp.end() );  // 删除 b 2 和 c 3
    ```
* size()  
获得map中映射的对数
    ```C++
    mp.size();
    ```
* clear() b 
清空map中所有元素
    ```C++
    mp.clear();
    ```
* map常见用途
    1. 需要建立字符（或字符串）与整数直接映射的题目，使用map减少代码量。
    2. 判断大整数或者其他类型数据是否存在的题目，可以把mao当bool数组使用
---

## 5.queue <span id = "queue">-[☝](#top) </span>  
queue，队列。先进先出的容器 
```C++
// 头文件
#include<queue>
using namespace std;
// 定义
queue< typename > name;
// 元素访问
queue<int> q;
q.front(); // 访问队首元素
q.back(); // 访问队尾元素
```

---

### queue常用函数实例解析 [ [示例-queue队列] ](practiseBox/queue.cpp)
* push()   
入队
    ```C++
    q.push(x);  // 队尾x入队
    ```
* pop()   
出队
    ```C++
    q.pop();  // 队首元素出队
    ```
* front()、back()  
分别访问队首和队尾

* empty()  
监测queue是否为空，返回true则空；false则非空
    ```C++
    if(q.empty() == true){ // 当前队列为空
        /* code */
    }
    ```
* size()  
返回queue内元素个数
* queue常见用途
    1. 实现广度优先搜索时，不用手动实现一个队列。
    2. 使用front和pop函数前，必须用empty()判断是否为空。

---

## 6.priority_queue <span id = "priority_queue">-[☝](#top) </span>  
优先队列，其底层用堆实现，队首元素一定是当前队列中优先级最高的那个。  [施工中]


---

## 7.stack <span id = "stack">-[☝](#top) </span>  
stack，栈。后进先出的容器。[ [示例-stack栈] ](practiseBox/stack.cpp)
```C++ 
// 头文件
#include<stack>
using namespace std;
// 定义
stack< typename > name;
// 访问
st.top();  // 访问栈顶元素
```
### stack常用函数实例解析
---
* push()  入栈
    ```C++
    st.push(i);
    ```
* pop()  出栈
    ```C++
    st.pop();
    ```
* top()  访问栈顶元素
    ```C++
    cout<<st.top();
    ```
* empty()  监测stack是否为空
* size()  返回stack内元素个数
* stack的常见用途
---

## 8.pair <span id = "pair">-[☝](#top) </span> [施工中]


---

## 9.algorithm[ [示例-algorithm] ](practiseBox/math.cpp)  <span id = "algorithm">-[☝](#top) </span>
---
1. max() / min() / abs() 
    * max(x,y)和min(x,y)分别返回x和y中的最大值和最小值，且参数必须是两个，若要比较三个可以使用max(x, max(y, z))
    * abx(x)返回x的绝对值。**x必须是整数** *浮点型使用math头文件下的fabs*
        ```C++
        max(x,y);
        min(x,y);
        abs(x);
        ```
2. swap()  
swap(x,y)交换x和y的值。
    ```C++
    swap(x,y);
    ```
3. reverse()  
reverse(it, it2)将数组指针在[it, it2)之间的元素或容器的迭代器在[it, it2)范围内的元素进行反转。
    ```C++
    // 反转数组
    int a[10] = {1,2,3,4,5,6};
    reverse(a, a+4);  // 将a[0]~a[3]反转 
    // 反转容器中的元素，如string字符串
    string str = "abcdefghi";
    reverse(str.begin() + 2, str.begin() + 6); // 对str[2]~str[5]反转 
    ```
4. next_permutation()   
next_permutation()给出一个序列在全排列中的下一个序列。
    ```C++
    int a[10] = {1,2,3};
    do{
        printf("%d%d%d", a[0], a[1], a[2]);
    }while(next_permutation(a, a+3));
    ```
5. fill()  
把数组或容器中的某一段区间赋相同的值。和memset不同，可以赋值数组类型范围内的任意值。
    ```C++
    fill(a+1,a+5,233); // a[0]~a[4]
    ```
6. sort()  
sort，排序函数
    ```C++
    sort(首元素地址,尾元素地址的下一个地址,比较函数(非必填))
    sort(a,a+4,cmp);
    ```
    * 比较函数cmp自定义排序规则
    ```C++
    // (1)整型int情况
    bool cmp(int a, int b){
        return a>b;  // a放在b的前面
    }
    // (2)结构体node情况
    struct node{
        int x,y;
    }ssd[10];
    // 按照x从大到小排列
    bool cmp(node a, node b){
        return a.x > b.x;
    }
    // (3)vector、string情况
    // vector
    bool cmp(int a, int b){
        return a>b;
    }
    vector<int> vi;
    vi.push_back(3);
    vi.push_back(4);
    vi.push_back(1);
    sort(vi.begin(), vi.end(), cmp); // 从大到小
    // string
    string str[3] = {"bbbb", "cc", "aaa"};
    sort(str, str+3); // 按字典序从小到大
    ```
7. lower_bound()和upper_bound()  [施工中]

---

<span id = "jump-math"><h1>[☝](#top) 6-数学问题——2019.03.02</h1></span>  


---

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

---

<span id = "jump-studyup"><h1>[☝](#top) 7-数据结构——2019.03.04</h1></span>

## 1. 栈的应用

---

## 2. 队列的应用

---

## 3. 链表处理

---

## 4. 搜索篇

---

### [1] 深度优先搜索DFS

---

### [2] 广度优先搜索BFS

---

## 5. 二叉树篇

---

### [1] 二叉树的遍历

### [2] 树的遍历

### [3] 二叉查找树(BST)

### [4] 平衡二叉树(AVL树)

### [5] 哈夫曼树

---

## 6. 并查集

---

## 7. 堆

---

## 8. 图算法

---

### [1] 图的基础

### [2] 图的遍历

#### (1) DFS

#### (2) BFS

### [3] 最短路径

#### (1) Dijkstra算法

#### (2) Floyd算法

### [4] 最小生成树

#### (1) prim算法

#### (2) kruskal算法

### [5] 拓扑排序

### [6] 关键路径

#### (1) AOV网和AOE网

#### (2) 最长路径

#### (3) 关键路径
---

<span id = "beizhu"><h1>[☝](#top) 备注</h1></span>

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
```
## Note-for-FuDan-Exam
---

THE END  (Github@Harwy)  
[GO BACK TO TOP☝](#top) 

---