#include <bits/stdc++.h>
using namespace std;
int n, m;//n�� m��
int cnt = 0;
char arr[601][601];
bool check[601][601]; // �湮����
pair<int, int> p;
int dx[4] = { 0, 0 ,-1, 1 };
int dy[4] = { 1, -1, 0, 0 };

void bfs() {
	queue<pair<int, int>> q; // �� �� ������ ������ ť
	q.push(p);
	check[p.first][p.second] = true;
	while (!q.empty()) {
		pair<int, int> cur =q.front();
		q.pop();
		for (int i = 0; i < 4;i++) {
			pair<int, int> next = {cur.first+ dy[i], cur.second+dx[i]};
			if (next.second >= m || next.first >= n || next.first < 0 || next.second < 0) continue;
			if (check[next.first][next.second] == true || arr[next.first][next.second] == 'X') continue;
			else{
				q.push(next);
				if (arr[next.first][next.second] == 'P') {
					cnt++;
				}
				check[next.first][next.second] = true;
			}
		}
	}

}

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i <n;i++) {
		for (int j = 0; j < m;j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'I') {
				p.second = j;
				p.first = i;
			}
		}
	}
	bfs();
	if (cnt == 0) {
		cout << "TT";
		return 0;
	}
	cout << cnt;
}
//bfs ť�� ����

// pair�� �� ���� ��Ҹ� �ϳ��� ��ü�� �����ִ� ������ �մϴ�. 
// �̷��� �� ���� ��Ҹ� ��� �� ���� ó���ϹǷ�, 
// ���������� int�� �����ϴ� �ͺ��� �� ���� �޸𸮸� �����մϴ�.
