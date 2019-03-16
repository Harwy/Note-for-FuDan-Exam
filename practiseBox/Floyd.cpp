#include<cstdio>
#include<algorithm>
using namespace std;

const int INF = 1000000000;
const int MAXV = 200;
int n, m;
int dis[MAXV][MAXV];

void Floyd() {
    for(int k = 0; k < n; k++){ //中间值为k
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(dis[i][k] != INF && dis[k][j] != INF && dis[i][k] + dis[k][j] < dis[i][j]){
                    dis[i][j] = dis[i][k] + dis[k][j]; //找到更短的路径
                }
            }
        }
    }
}

int main(){
    int u, v, w;
    fill(dis[0], dis[0]+MAXV*MAXV, INF);
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
        dis[i][i] = 0; //顶点i到顶点i的距离初始化为0
    }
    for(int i = 0; i < m; i++){
        scanf("%d%d%d", &u, &v, &w);
        dis[u][v] = w;
    }
    Floyd();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", dis[i][j]);
        }
        printf("\n");
    }
    return 0;
}