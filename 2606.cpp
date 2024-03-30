	#include <bits/stdc++.h>
	using namespace std;
	int n, m;
	int arr[101][101]; // �׷����� ǥ���� �������

	int bfs(int v) {
		int cnt = 0;
		bool visit[101] = { false };	// �湮 ����
		queue<int> q; // ť�� ���� bfs Ž��
		q.push(v);
		visit[v] = true;
		while (!q.empty()) {
			v = q.front();
			for (int i = 1; i <= n; i++) {
				if (arr[v][i] == 1 && visit[i] == false) {
					q.push(i);
					visit[i] = true;
					cnt++;
				}
			}
			q.pop();
		}
		return cnt;
	}

	int main(void) {
		cin >> n >> m;
		for (int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			arr[x][y] = 1; // ������� ����
			arr[y][x] = 1; // symetric���� ����������
		}
		cout << bfs(1);
	}