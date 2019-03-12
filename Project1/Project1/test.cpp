/* A1034
1.��AAAת��Ϊ����
2.��ȡȨ��
3.����
4.�ж�Gang
Notice��
1.ͨ����¼<=1000��������<=2000
2.map<type1, type2>���Զ�����type1����������˽���map<string, int>����ͷĿ����
�ͳ�Ա�����Ĺ�ϵ
 */
#include<iostream>
#include<string>
#include<map>
using namespace std;

const int maxn = 2010; //����
const int INF = 1000000000;

map<int, string> intToString; //���->����
map<string, int> stringToint; //����->���
map<string, int> Gang; //head->����

int G[maxn][maxn] = { 0 }, weight[maxn] = { 0 }; //�ڽӾ���G����Ȩweight
int n, k, numPerson = 0; //����n������k��������numPerson
bool vis[maxn] = { false };

//headΪͷĿ��numMemberΪ��Ա��ţ�totalValueΪ��ͨ���ܱ�Ȩ
void DFS(int nowVisit, int& head, int& numMember, int& totalValue) {
	numMember++; //��Ա����+1
	vis[nowVisit] = true;
	if (weight[nowVisit] > weight[head]) {
		head = nowVisit; //�����ʽ��ĵ�Ȩ����ͷĿ�ĵ�Ȩ�������ͷĿ
	}
	for (int i = 0; i < numPerson; i++) {
		if (G[nowVisit][i] > 0) {
			totalValue += G[nowVisit][i];
			if (vis[i] == false) {
				DFS(i, head, numMember, totalValue);
			}
		}
	}
}

//DFSTrave������������ͼ����ȡÿ����ͨ�����Ϣ
void DFSTravel() {
	for (int i = 0; i < numPerson; i++) {
		if (vis[i] == false) {
			int head = i, numMember = 0, totalValue = 0; //ͷĿ����Ա�����ܱ�Ȩ
			DFS(i, head, numMember, totalValue);
			if (numMember > 2 && totalValue/2 > k) {
				Gang[intToString[head]] = numMember;
			}
		}
	}
}

//change������������str��Ӧ�ı��
int change(string str) {
	if (stringToint.find(str) != stringToint.end()) { //str�Ѿ����ֹ�
		return stringToint[str]; //���ر��
	}
	else {
		stringToint[str] = numPerson;
		intToString[numPerson] = str;
		return numPerson++;
	}
}

int main() {
	int w;
	string str1, str2;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> str1 >> str2 >> w;
		int id1 = change(str1);
		int id2 = change(str2);
		weight[id1] += w;
		weight[id2] += w;
		G[id1][id2] += w;
		G[id2][id1] += w;
	}
	DFSTravel();
	cout << Gang.size() << endl;
	map<string, int>::iterator it;
	for (it = Gang.begin(); it != Gang.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	system("pause");
	return 0;
}
