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

[7-数据结构——2019.03.04](#jump-studyup)(内容极其庞大)
* [->](#node)链表处理
* [->](#search)搜索篇
    * DFS
    * BFS
* [->](#tree)二叉树篇   
    * [->](#BST-tree)BST   
    * [->](#tree-union)并查集 
* [->](#G)图论篇
    * [->](#G-DFS)图的DFS
    * [->](#G-BFS)图的BFS
    * [->](#G-short)最短路径
    * [->](#G-tree)最小生成树
    * [->](#G-G)拓扑排序
       
...

 [8-动态规划](#DP)

 [9-字符串进阶](#KMP)

[习题集](PAT-Book.md)

[代码技巧注](#coding)

[备注](#beizhu)

### 作者PS：
> / 2019.03.01 完成与github的对接&重新细分目录  
> / 2019.03.03 在window下路径为"a\b.cpp"，但在github上路径为"a/b.cpp",予以修正  
> / 2019.03.04 更新全部目录，天呐还有好多内容。。。在2周时间内能够学完么？

---
![图片-777](777.jpg)  
> 永远不要等后悔了才开始努力~好的~  
正文开始

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

## 暂留 memset方法

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
stack
---

## 2. 队列的应用
queue
---

## 3. 链表处理<span id = "node">-[☝](#top) </span>
```C++
struct node{
    typename data;
    node* next;
};
```
### 动态链表malloc或new为链表节点分配内存空间
* C语言malloc与free
1. malloc函数  
C语言中用于动态申请空间
    ```C
    #include<stdlib.h>  // 用于申请动态内存的函数
    // 用法
    typename* p = (typename*)malloc(sizeof(typename));
    int* p = (int*)malloc(sizeof(int));
    node* p = (node*)malloc(sizeof(node));  // 申请内存空间大小为node类型，若申请失败则返回NULL空指针给指针p
    ```
2. free函数  
    ```C++
    free(p);
    ```
* C++中new与delete
1. new运算符  
new是C++中用来申请动态空间的运算符，其返回类型同样是申请的同变量类型的指针。
    ```C++
    typename* p = new typename;
    int* p = new int;
    node* p = new node;
    ```
2. delete运算符  
对应new运算符
    ```C++  
    delete(p);
    ```
### 静态链表
对节点的地址是比较小的整数，静态
```C++
// 不需要动态建立节点时，使用静态链表
struct Node{
    typename data; //数据域
    int next;  //指针域
}node[size];
// 建立连接
node[11111] = 22222;
node[22222] = 33333;
node[33333] = -1; // -1对应动态链表中的NULL
```
* 常用静态链表方法：
    1. 定义静态链表
    ```C++
    struct Node{
        int address; //节点地址
        typename data; //数据域
        int next; //指针域
        XXX; //节点某种性质
    }node[100010];
    ```
    2. 静态链表初始化
    ```C++
    for(int i = 0; i<maxn; i++){
        node[i].XXX = 0;
    }
    ```
    3. 遍历链表
    ```C++
    while(p != -1){
        XXX = 1;
        count++;
        p = node[p].next;
    }
    ```
    4. 数组排序   [ [示例-A1052.cpp] ](PAT-LevelA/A1052.cpp)
    ```C++
    bool cmp(Node a, Node b){
        if(a.XXX == -1 || b.XXX == -1){
            //至少一个节点是无效的，就把它放到数组后面
            return a.XXX > v.XXX
        }else{
            //二级排序
        }
    }
    // 注：sort函数对链表排序，只针对node[i].address排序，对next不作处理
    ```
---

## 4. 搜索篇<span id = "search">-[☝](#top) </span>

---

### [1] 深度优先搜索 DFS
> 深度优先搜索是枚举所有完整路径以遍历所有情况的搜索方式。  
> 使用**递归**能够很好实现深度优先搜索。

* 【例1】n个物品，每个物品重量w[i]，价值c[i]，需要选出若干放入容量为V的背包，使得价值量最大。(1<=n<=20)  
解答如下：[ [例1.质量最大问题] ](practiseBox/test1.cpp)
---

### [2] 广度优先搜索 BFS
> 借用队列完成BFS
```C++
void BFS(int s){
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        取出队首元素top;
        访问队首元素top;
        将队首元素出队;
        将top下一层结点中未曾入队的结点全部入队，并设置为已入队;
    }
}
```
---

## 5. 二叉树篇<span id = "tree">-[☝](#top) </span>
> 二叉树的递归定义：  
    1. 二叉树没有根节点，是一颗空树。  
    2. 二叉树由根节点、左子树、右子树组成，且左子树和右子树都是二叉树。  
[ [示例-二叉树的储存] ]()
> 二叉树的存储
```C++
// 二叉树定义
struct node{
    typename data; // 数据域
    node* lchild;
    node* rchild;
};
```
---

### [1] 二叉树的遍历
1. 先序遍历 preorder
    ```C++
    void preorder(node* root){
        if(root == NULL){
            return; //到达空树，递归边界
        }
        //访问根节点，即相关操作
        printf("%d\n", root->data);
        //访问左子树
        preorder(root->lchild);
        //访问右子树
        preorder(root->rchild);
    }
    ```
2. 中序遍历 inorder
    ```C++
    void inorder(node* root){
        if(root == NULL){
            return; //到达空树，递归边界
        }
        //访问左子树
        preorder(root->lchild);
        //访问根节点，即相关操作
        printf("%d\n", root->data);
        //访问右子树
        preorder(root->rchild);       
    }
    ```
3. 后序遍历 postorder
    ```C++
    void postorder(node* root){
        if(root == NULL){
            return; //到达空树，递归边界
        }
        //访问左子树
        preorder(root->lchild);
        //访问右子树
        preorder(root->rchild); 
        //访问根节点，即相关操作
        printf("%d\n", root->data);
    }
    ```
4. 层次遍历 layerorder
    ```C++
    void layerorder(node* root){
        queue<node*> q;
        q.push(root);
        while(!q.empty()){
            node* now = q.front();
            q.pop();
            printf("根节点相关操作");
            if(now->lchild != NULL) q.push(now->lchild);
            if(now->rchild != NULL) q.push(now->rchild);
        }
    }
    //记录层次layer的变量的层次遍历
    struct node{
        int data;
        int layer;
        node* lchild;
        node* rchild;
    };
    void layerorder(node* root){
        queue<node*> q;
        root->layer = 1;
        q.push(root);
        while(!q.empty()){
            node* now = q.front();
            q.pop();
            printf("根节点相关操作");
            if(now->lchild != NULL) {
                now->lchild->layer = now->layer + 1;
                q.push(now->lchild);
            }
            if(now->rchild != NULL) {
                now->rchild->layer = now->layer + 1;
                q.push(now->rchild);
            }
        }
    }
    ```
* **给定一颗二叉树的先序遍历序列和中序遍历序列，重建这颗二叉树**
[ [示例-create] ](practiseBox/tree.cpp)

例题：PAT A1020 Tree Traversals  
给出二叉树的后序遍历序列和中序遍历序列，求这颗二叉树的层次遍历序列。  
[ [解答-A1020] ](PAT-LevelA/A1020.cpp)

---

### [2] 树的遍历
> 树：子节点个数不限且子节点没有先后顺序的树  
无所谓左右。因此定义结点结构体如下：  
```C++
struct node {

    int data;
    int child[maxn]; 
    //若题目中结点数过多使用vector代替数组
    vector<int> child;
}Node[maxn];
```
1. 树的先根遍历
    * 类似二叉树的先序遍历，总是先访问根结点，再访问所有子树。
    ```C++
    void PreOrder(int root){
        printf("%d ", Node[root].data); // 访问当前结点
        for(int i=0;i<Node[root].child.size(); i++){
            PreOrder(Node[root].child[i]); // 递归访问结点root的所有子结点
        }
    }
    ```
2. 树的层序遍历  
    * 类似二叉树的层次遍历。
    ```C++
    void LayerOrder(int root){
        queue<int> Q;
        Q.push(root); // 根结点入队
        while(!Q.empty()){
            int front = Q.front(); //取出队首元素
            //对当前结点操作
            Q.pop();
            for(int i = 0; i < Node[front].child.size(); i++){
                Q.push(Node[front].child[i]); //当前结点的所有子结点入队
            }
        }
    }
    ```
3. 例题 【PAT A1053】Path of Equal Weight  
    [ [解答-A1053.cpp] ](PAT-LevelA/A1053.cpp)
---

### [3] 二叉查找树(BST) <span id = "BST-tree">-[☝](#top) </span>
[ [示例-BST] ](practiseBox/BST.cpp)

【PAT A1043】Is it a Binary Search Tree 
> 二叉查找树，判断当前序列是否是前序遍历的二叉查找树或者镜像的二叉查找树。  
输入：  
7(包含多少个元素N <= 1000)  
8 6 5 7 10 8 11  
输出：  
YES/NO
若YES，输出Postorder  
[ [解答-A1043] ](PAT-LevelA/A1043.cpp)

---

### [4] 平衡二叉树(AVL树) 
> 平衡因子：任意结点，左右子树的高度差  
在树的结构中加入变量height记录当前结点为根节点的子树的高度。
```C++
struct node {
    int v, height; //v为结点权值，height为当前子树高度
    node *lchild, *rchild;
};
```
> 难点：插入问题
---
### [5] 哈夫曼树
通过小顶堆的优先队列获取哈夫曼树 [haffman.cpp](practiseBox/haffman.cpp)  


---

## 6. 并查集 <span id = "tree-union">-[☝](#top) </span>
> 并查集：维护集合的数据结构。Union（合并）、Find（查找）、Set（集合）  
支持的操作：  
1.合并：合并两个集合。  
2.查找：判断两个元素是否在一个集合中。
```C++
int father[N];
father[2] = 1;//2的父结点是1
father[4] = 2;//4的父结点是2
```
> 并查集操作：  
1.初始化：另所有father[i]=i;  
2.查找：findFather(int x) 反复查找直到找到 x = father[x];  
3.合并：把两个集合合并成一个集合  
>> (1)  对于给定的两个元素a,b，判断是否属于同一个集合，即  
faA = findFather(a);  
faB = findFather(b);  
faA ? faB  
>> (2)  合并： faA ！= faB条件下，  father[faA] = faB即可

练习：【好朋友】P332

---

## 7. 堆
> 堆是一颗完全二叉树。树中每个结点的值都不小于或者不大于其左右孩子结点的值。    
父亲结点的值大于或等于孩子结点：**大顶堆**  
父亲结点的值小于或等于孩子结点：**小顶堆**  
示例：[堆的建立、删除，堆排序](practiseBox/heap.cpp)
---

## 8. 图算法 <span id = "G">-[☝](#top) </span>

---

### [1] 图的基础
> 图的存储：  
> 1.邻接矩阵 G[][]  
> 2.邻接表：   
    >> （1）存放每条边的终点编号vector<int> Adj[N];  
    >> （2）或建立node结构体， vector<Node> Adj[N];  

```C++
struct Node {
    int v; //边的终点编号
    int w; //边的权值
    Node(int _v, int _w) : v(_v), w(_w) {} //构造函数
}
vector<Node> Adj[N];

A[1].push_back(Node(3,4)); //加边
```

### [2] 图的遍历
> 图的遍历就是指对图的所有顶点按一定的顺序进行访问。
#### (1) DFS 深度优先 <span id = "G-DFS">-[☝](#top) </span>
1. **连通分量：**  
*无向图* 中，两个顶点直接可以互相抵达（通过一定路径间接抵达），则两个顶点连通。  
若图G(V,E)的任意两个顶点都连通，则成为连通图。  
否则成为非连通图。且其中的极大连通子图为连通分量。
2. **强连通分量：**  
*有向图* 中，两个顶点各自通过一条有向路径到达另一个顶点，则这两个顶点强连通。  
若G(V,E)的任意两个顶点都强连通，则称图G为强连通图；  
否则图G为非强连通图，且其中极大连通子图为强连通分量。  

[ [示例-DFS] ](practiseBox/DFS.cpp)

【PAT A1034】 Head of a Gang  
解答： [ [A1034.cpp] ](PAT-LevelA/A1034.cpp)  
> threthold 阈值  
cluster 集聚，丛


---
#### (2) BFS 广度优先<span id = "G-BFS">-[☝](#top) </span>
> BFS遍历图需要一个**队列**，反复取出队首顶点，将该顶点可到达的**未曾加入过队列**的顶点全部入队。
[ [示例-BFS] ](practiseBox/BFS.cpp)  

【PAT A1076】 Forwards on Weibo  
解答： [ [A1076.cpp] ](PAT-LevelA/A1076.cpp)


### [3] 最短路径 <span id = "G-short">-[☝](#top) </span>
> 最短路径是图论经典问题：  
给定图G(V,E)，求从起点到终点的路径， 使得这条路径上经过的所有边的边权之和最小。  
给出图G(V.E)，和起点S、终点T，求S到T的最短路径。  
解决最短路径问题的常用算法：  
（1）Dijkstra算法  
（2）Bellman-Ford算法  
（3）SPFA算法  
（4）Floyd算法  

---

#### (1) Dijkstra算法 （迪杰斯特拉算法）
> 解决**单源最短路径问题**
```C++
//G为图， 一般设成全局变量；数组d为源点到达各点的最短路径长度，s为起点
Dijkstra(G, d[], s){
    初始化;
    for(循环n次){
        u = 使d[u]最小且还未被访问的顶点的标号;
        记u已被访问;
        for(从u出发能到达的所有顶点v){
            if(v未被访问 && u为中介点使s到顶点v的最短距离d[v]更优){
                优化d[v];
            }
        }
    }
}
```
[ [示例-Dijkstra.cpp] ](practiseBox/Dijkstra.cpp)  
【PAT A1003】Emergency  
解答：[ [A1003.cpp] ](PAT-LevelA/A1003.cpp)  

【PAT A1030】Travel Plan    
解答：[ [A1030.cpp] ](PAT-LevelA/A1030.cpp)

#### (2) Floyd算法
> 弗洛伊德算法:解决**全源最短路问题**。  
解决任意两点u，v之间的最短路径长度，时间复杂度O(n^3).  
限制顶点数n约在200以内。  
使用邻接矩阵来实现Floyd算法  
```C++
枚举顶点k ∈ [1, n]
以顶点k作为中介，枚举所有顶点对i和j

```
[注意]：k必须放在三重循环的最外层(k为中间参数)。  
[ [示例-Floyd.cpp] ](practiseBox/Floyd.cpp)

---

### [4] 最小生成树MST <span id = "G-tree">-[☝](#top) </span>
> 最小生成树(Minimum Spanning Tree)  
给定 **无向图G(V,E)** 使得这颗树，拥有所有顶点n，以及n-1条边，使得整个树的边权之和最小。  
最小生成树的算法prim算法和kruskal算法。  

#### (1) prim算法
> 普里姆算法  
核心：每次加一条边再考虑相邻最小
```C++
// G为图，一般设成全局变量；数组d为顶点与集合S的最短距离
Prim (G, d[]) {
    初始化;
    for(循环n次) {
        u = 使d[u]最小的还未被访问的顶点的标号;
        记u已被访问;
        for(从u出发能到达的所有顶点v){
            if(v未被访问 && 以u为中介点使得v与集合S的最短距离d[v]更优){
                将G[u][v]赋值给v与集合S的最短距离d[v];
            }
        }
    }
}
```
[ [示例-Prim算法] ](practiseBox/Prim.cpp)


#### (2) kruskal算法
> 克鲁斯卡尔算法  
核心：采用 **边贪心** 的策略，按边权递增排列，每次加一条边，且不会产生回路，直到边数为n-1  
```C++
//边定义
struct edge {
    int u, v; //边的两端点编号
    int cost; //边权
}E[MAXE]; //最多有MAXE条边
//sort排序问题
bool cmp(edge a, edge b){
    return a.cost < b.cost;
}
```

### [5] 拓扑排序 <span id = "G-G">-[☝](#top) </span>
> 针对有向无环图(Directed Acyclic Graph, DAG)  
[ [示例-拓扑排序] ](practiseBox/DAG.cpp)

### [6] 关键路径
> 顶点活动(AOV):用顶点表示活动，用边表示活动间优先关系的有向图；  
边活动(AOE):用带权的边集表示活动，用顶点表示事件的有向图；  
* 关键路径：  
AOE网是有向无环图，**求解有无环向图(DAG)中最长路径的方法**  
[ [示例-关键路径(待更新)] ]()  

---

<span id = "DP"><h1>[☝](#top) 8-动态规划</h1></span>
> 动态规划(Dynamic Programming, DP)  
解决最优化问题的算法问题  
将复杂问题分解成若干子问题，使用 **递归或递推** 的写法实现动态规划，称 **记忆化搜索**  
1. 动态规划的递归写法：  
该问题必须要有重叠的子问题，则通过dp记录子问题的解而不需要重复计算子问题  
[ [示例-DP-斐波那契函数] ](practiseBox/DP-F.cpp)  
2. 动态规划的递推写法：  
[ [示例-DP-数塔问题] ](practiseBox/DP-tower.cpp)
* 递推：自底向上  
  递归：自顶向下

## （1）最大连续子序列和
> 题目：  
给定一个数字序列，求i,j，使得Ai+...+Aj最大，输出这个最大和  
分析：  
令dp[i]表示以A[i]为末尾的连续序列的最大和  
则，dp[i] = max{ A[i], dp[i-1]+A[i] }  
[ [示例-DP-最大连续子序列和] ](practiseBox/DP-3.cpp)

## （2）最长不下降子序列(LIS)
> 在一个数字序列中，找到一个最长的子序列(可以不连续),使得这个子序列是不下降的(非递减的);  
分析：  
dp[i]为以A[i]结尾的最长不下降子序列的长度。  
[ [示例-DP-最长不下降子序列(LIS)] ](practiseBox/DP-4.cpp)

## （3）最长公共子序列(LCS)
> 描述：  
给定两个字符串A和B，求一个字符串，使得这个字符串是A和B的最长公共部分  
解答：  
令dp[i][j]表示字符串A的i位与字符串B的j位之前的LCS长度，下标从1开始  
1.若A[i] == B[j]，则d[i][j] = d[i-1][j-1] + 1;  
2.若A[i] != B[j]，则字符串A的i位和字符串B的j位之前的LCS无法延长，因此继承dp[i-1][j] 与 dp[i][j-1]的较大值。  
边界：dp[i][0] = dp[0][j] = 0;  
[ [示例-DP-最长公共子序列(LCS)] ](practiseBox/DP-LCS.cpp)

> 若公共部分能够重复，则：  
MAX = max(dp[i-1][j], dp[i][j-1]);  
1.若A[i] == B[j]，则d[i][j] = MAX + 1;  
2.若A[i] != B[j]，则d[i][j] = MAX;  
边界：dp[i][0] = dp[0][j] = 0; 

 ## （4）最长回文子串
 > 描述：  
 给出一个字符串S谋求S的最长回文子串的长度。  
 例子：  
 PATZJUJZTACCBCC的最长回文为ATZJUJZTA，长度为9。   
 解答：  
d[i][j]表示S[i]至S[j]所表示的子串是否为回文子串，是则为1，不是为0  
1.若S[i] == S[j]，那么只需要判断S[i+1]与S[j-1]是否是回文子串，若是则是子串  
2.若S[i] != S[j]，那么S[i]至S[j]肯定不是回文子串  
[ [示例-DP-最长回文子串] ](practiseBox/DP-backstring.cpp)

 ## （5）DAG最长路
 > 赶工中。。。

 ## (6)背包问题
 > 01背包问题  
 > 完全背包问题  

### (I)01背包问题
> 问题：  
有n件物品，每件物品的重量为w[i]，价值为c[i]。现有一个容量为V的背包，问如何选取物品放入背包，使得背包内物品的总价值最大。其中每种物品都只有1件。  
样例：  
5 8       //n==5,V==8  
3 5 1 2 2 //w[i]  
4 5 2 1 3 //c[i]  
令dp[i][v]表示前i件物品恰好装入容量为v的背包中所能获得的最大价值。  
分析：  
1.不放第i件物品，则前i-1件物品恰好装入容量为v的背包所能获得的最大价值，即d[i-1][v];  
2.放第i件物品，则转化为前i-1件物品恰好装入容量为v-w[i]的背包中所能获得的最大价值，即dp[i-1][v-w[i]] + c[i];  
[ [示例-DP-01背包问题] ](practiseBox/DP-01bag.cpp)
 

### (II)完全背包问题
> 赶工中。。。

### 总结：
1. **最大连续子序列和**  
令dp[i]表示以A[i]作为末尾的连续序列的最大和。  
2. **最长不下降子序列(LIS)**    
dp[i]为以A[i]结尾的最长不下降子序列的长度。  
3. **最长公共子序列(LCS)**    
令dp[i][j]表示字符串A的i位与字符串B的j位之前的LCS长度
4. **最长回文子串**    
令dp[i][j]表示S[i]至S[j]所表示的子串是否是回文子串。
5. **数塔DP**  
令d[i][j]表示从第i行第j列个数字出发的到达最底层的所有路径上所能得到的最大和。
6. **DAG最长路**  
令dp[i]表示从i号顶点出发能获得的最长路径长度。
7. **01背包**    
令dp[i][v]表示前i件物品恰好装入容量为v的背包中所能获得的最大价值。 
8. **完全背包**  
令dp[i][v]表示前i件物品恰好装入容量为v的背包中所能获得的最大价值。

---

<span id = "KMP"><h1>[☝](#top) 9-字符串</h1></span>


---
#

<span id = "coding"><h1>[☝](#top) 代码技巧注</h1></span> 
1. 保留位数和小数点
```C
//保留5位数，用空格补齐
%5d
//保留5位数,不足用0补齐
%05d
//保留2位小数
%.2d
```
2. C语言与C++语言的文件输入输出
    * C语言   
    参考1：[[网页跳转->C]](https://www.cnblogs.com/home123/p/8318903.html)
    * C++   
    参考1：[[网页跳转->C++]](https://www.cnblogs.com/hdk1993/p/5853233.html)  
    参考2：[ [C++对txt操作] ](https://blog.csdn.net/stpeace/article/details/12404925)  
    示例：[ [file.cpp] ](file.cpp)

---

<span id = "beizhu"><h1>[☝](#top) 关于MD文件的备注</h1></span>

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
---
## codeblocks设置自动补全
1.打开setting->editor  

* BrowseTracker-Enable BrowseMarks

* FortranProject-keyword & keyword case

* Code completion- 2,3,4,5,6,7

2.在General settings中将Automatically launch when typed # letter中的4改成1，这样打1个字母就会有提示了。  
3.在左边的选项栏中找到 Code completion  
4.将Keyword sets to additionally include中1到5都勾上  
5.将Delay for auto-kick-in when typing [.::->]拉到 200ms，这样瞬间就出来了  
  



---
## Note-for-FuDan-Exam
---

THE END  (Github@Harwy)  
[GO BACK TO TOP☝](#top) 

---