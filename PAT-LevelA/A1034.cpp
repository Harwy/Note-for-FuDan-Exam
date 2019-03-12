/* A1034
1.将AAA转化为数字
2.获取权点
3.遍历
4.判断Gang
Notice：
1.通话记录<=1000，人数在<=2000
2.map<type1, type2>是自动按键type1递增排序，因此建立map<string, int>建立头目姓名
和成员人数的关系
 */
#include<iostream>
#include<string>
#include<map>
using namespace std;

const int maxn = 2010; //人数
const int INF = 1000000000;

map<int, string> intToString; //编号->姓名
map<string, int> stringToint; //姓名->编号
map<string, int> Gang; //head->人数

int G[maxn][maxn] ={0}, weight[maxn] = {0}; //邻接矩阵G，点权weight
int n, k, numPerson = 0; //边数n、下限k、总人数numPerson
bool vis[maxn] = {false};

//head为头目，numMember为成员编号，totalValue为连通块总边权
void DFS(int nowVisit, int& head, int& numMember, int& totalValue){
    numMember++; //成员人数+1
    vis[nowVisit] = true;
    if(weight[nowVisit] > weight[head]){
        head = nowVisit; //当访问结点的点权大于头目的点权，则更新头目
    }
    for(int i=0; i < numPerson; i++){
        if(G[nowVisit][i] > 0){
            totalValue += G[nowVisit][i];
            if(vis[i] == false){
                DFS(i, head, numMember, totalValue);
            }
        }
    }
}

//DFSTrave函数遍历整个图，获取每个连通块的信息
void DFSTravel(){
    for(int i=0; i<numPerson; i++){
        if(vis[i] == false){
            int head = i, numMember = 0, totalValue = 0; //头目，成员数，总边权
            DFS(i, head, numMember, totalValue);
            if(numMember > 2 && totalValue/2 > k){
                Gang[intToString[head]] = numMember;
            }
        }
    }
}

//change函数返回姓名str对应的编号
int change(string str){
    if(stringToint.find(str) != stringToint.end()){ //str已经出现过
        return stringToint[str]; //返回编号
    }else{
        stringToint[str] = numPerson;
        intToString[numPerson] = str;
        return numPerson++;
    }
}

int main(){
    int w;
    string str1, str2;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>str1>>str2>>w;
        int id1 = change(str1);
        int id2 = change(str2);
        weight[id1] += w;
        weight[id2] += w;
        G[id1][id2] += w;
        G[id2][id1] += w;
    }
    DFSTravel();
    cout<<Gang.size()<<endl;
    map<string, int>::iterator it;
    for(it = Gang.begin(); it != Gang.end(); it++){
        cout<<it->first <<" "<<it->second <<endl;
    }
    return 0;
}
