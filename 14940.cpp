#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m;
	int dist[1001][1001]; //�ʱ�ȭ ���� ����: ���� �ƴ� ������ ��� �ʱ�ȭ -> �ݺ���
	int arr[1001][1001];
	bool visited[1001][1001] = { false };
	int dx[4] = { 1, -1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	queue <pair<int, int>> q;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			dist[i][j] = -1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 2) {
				q.push({ i, j }); // ��ǥ������ ��� �������� ���߻� !
				dist[i][j] = 0; // ��� �����̴ϱ� �Ÿ��� 0�̰���?
				visited[i][j] = true;
			}
		}
	}
	// bfs ����
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.second + dx[i];
			int ny = cur.first + dy[i];
			if (visited[ny][nx]) continue;
			if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
			if (arr[ny][nx] == 0) continue; // �� ���� �������־����!!
			else {
				dist[ny][nx] = dist[cur.first][cur.second] + 1;
				q.push({ ny, nx });
				visited[ny][nx] = true;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) cout << 0<<' ';
			else cout << dist[i][j] << ' ';
		}
		cout << '\n';
	}
}


//�ʱ�ȭ�� �� ������ �� !!!!
// int arr[3] = { -1 };�� ù ��° ��Ҹ� - 1�� �ʱ�ȭ�ϰ�
// ������ ��Ҵ� 0���� �ʱ�ȭ�ȴ�....