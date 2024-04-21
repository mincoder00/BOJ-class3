#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int date=0;
	int m, n;	// ���� ����
	int arr[1001][1001];
	int dx[4] = { 1, -1, 0 , 0 };
	int dy[4] = { 0, 0, 1, -1 };
	cin >> m >> n;
	queue <pair <int, int>> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m;j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				q.push({ i, j });
			}		
		}
	}
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 &&�� nx < m && ny <n && arr[ny][nx] == 0) {
				q.push({ ny, nx });
				arr[ny][nx] = arr[y][x] + 1;
			}
		}
		}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m;j++) {
			if (arr[i][j] == 0) {
				cout << -1; 
				return 0;
			}
			if (arr[i][j] > date) date = arr[i][j]; // �ִ� ���ϱ�
		}
	}
	cout << date - 1;// 1���� �����ϹǷ� date -1 ���� ����/
}

//���ʿ��� ��ҵ��� �߰��� ���� �ڵ尡 ���������� ���� Ȯ���� ��������.
// arr[ny][nx] == 0�� �����Ƿ� -1�� ������ ������� �ʾƵ� ó���ȴ�.
// �� ������ ���� �߿��� �Ǹ����� ���� ť �� +1�� �ؼ� �Ÿ��� �����Ѵٴ� ����