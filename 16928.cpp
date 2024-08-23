#include <bits/stdc++.h>
using namespace std;

int nxt[101];
int d[101]; // y�� �����ϴ� �ֻ����� Ƚ��

int main(void) {

	// [point] �ֻ����� ���� �̵�(+1~6)�� bfs���� ����
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= 100;i++) {
		nxt[i] = i; // ���̳� ��ٸ� ���� ���
		d[i] = -1;
	}
	for (int i = 0; i < n + m; i++) {// x- >y�� ��ǥ �̵�
		int x, y;
		cin >> x >> y;
		nxt[x] = y;
	}
	/*--------------bfs ����--------------*/
	queue<int> q;
	d[1] = 0;
	q.push(1);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 1; i <= 6; i++) {
			int y = x + i;
			if (y > 100) continue;
			y = nxt[y]; // ��ǥ �̵� ����
			if (d[y] == -1) {
				d[y] = d[x] + 1;
				q.push(y);
			}
		}
	}
	cout << d[100];
}
// ref:https://guiyum.tistory.com/45