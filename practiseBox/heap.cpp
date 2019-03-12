/* 堆的创建和删除 */
#include<stdio.h>
#include<algorithm>
using namespace std;

const int maxn = 100;
//heap为堆，n为元素个数
int heap[maxn], n = 10;

//对heap数组在[low, high]范围进行向下调整
//其中low为调整结点的数组下标，high为堆最后一个元素的数组下标
void downAdjust(int low, int high) {
    int i = low, j=i*2; //j为i的左孩子
    while(j <= high){ //存在孩子结点
        //如果右孩子存在，且右孩子的值大于左孩子
        if(j+1 <= high && heap[j+1] > heap[j]){
            j = j+1;
        }

        //如果孩子中最大的权值比调整结点i大
        if(heap[j] > heap[i]){
            swap(heap[j], heap[i]);
            i = j;
            j = i*2;
        }else{
            break;
        }
    }
}

//建堆
void createHeap(){
    for(int i=n/2; i>=1; i--){
        downAdjust(i, n);
    }
}

//删除堆
void deleteTop(){
    heap[1] = heap[n--]; //用最后一个元素覆盖堆顶元素，并让元素个数减1
    downAdjust(1, n);
}

//往堆中添加一个元素
//heap数组在[low, high]范围内向上调整
//low一般为1，high表示调整结点的数组下标
void upAdjust(int low, int high){
    int i=high, j = i/2; //i为调整结点，j为其父亲
    while(j >= low){
        if(heap[j] < heap[i]){
            swap(heap[j], heap[j]);
            i = j;
            j = i/2;
        }else{
            break;
        }
    }
}

//添加元素x
void insert(int x){
    heap[++n] = x;
    upAdjust(1, n);
}

void heapSort(){
    createHeap(); //建堆
    for(int i=n; i>1; i++){ //倒着枚举
        swap(heap[i], heap[1]); //当前heap[i]为当前堆最大值
        downAdjust(1, i-1); //调整堆
    }
}