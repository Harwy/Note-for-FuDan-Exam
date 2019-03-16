/*
city highway cost
shortest path between start and destination
if not unique, output the min cost one
N     M         S      D
city  highway   start  destination
---------
c1 c2 dis cost
--------
Output:
start-------destination  total dis  total cost

*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int MAXV = 510;
const int INF = 1000000000;

int n, m, start, destin, G[MAXV][MAXV], cost[MAXV][MAXV];
//dΪ���·����c·���ܼۣ�cost�۸�dis[i]=u��¼u->i�����·��
int d[MAXV], c[MAXV], pre[MAXV];
bool vis[MAXV] = { false };

void Dijkstra(int s) {
	fill(d, d + MAXV, INF);
	fill(c, c + MAXV, INF);
	for (int i = 0; i < n; i++) pre[i] = i;
	d[s] = 0; //��㵽�������0
	c[s] = 0; //��㵽������0
	for (int i = 0; i < n; i++) { //ѭ��n��
		int u = -1, MIN = INF; //uʹd[u]��С��MIN�����С��d[u]
		for (int j = 0; j < n; j++) {
			if (vis[j] == false && d[j] < MIN) {
				u = j;
				MIN = d[j];
			}
		}
		if (u == -1) return;
		vis[u] = true;
		for (int v = 0; v < n; v++) {
			if (vis[v] == false && G[u][v] != INF) {
				if (d[u] + G[u][v] < d[v]) {
					d[v] = d[u] + G[u][v];
					c[v] = c[u] + cost[u][v];
					pre[v] = u; //v��ǰ����u
				}else if (d[u] + G[u][v] == d[v]) {
					if (c[u] + cost[u][v] < c[v]) {
						c[v] = c[u] + cost[u][v];
						pre[v] = u;
					}
				}
			}
		}
	}
}

void DFS(int v) {
	if (v == start) {
		printf("%d ", v);
		return;
	}
	DFS(pre[v]);
	printf("%d ", v);
}

int main() {
	cin >> n >> m >> start >> destin;
	int u, v;
	fill(G[0], G[0] + MAXV * MAXV, INF);
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		cin >> G[u][v] >> cost[u][v];
		//G[v][u] = G[u][v];
		//cost[v][u] = cost[u][v];
	}
	Dijkstra(start);
	DFS(destin); //ִ�д�ӡ
	printf("%d %d\n", d[destin], c[destin]);
	system("pause");
	return 0;
}
