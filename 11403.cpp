#include <bits/stdc++.h>
using namespace std;
int arr[101][101];
bool check[101];
int n, ans=0;

void dfs(int i, int j) {
	for (int t = 0; t < n;t++) {
		if (!check[t]&&arr[i][t]==1) {
			check[t] = true;
			if (t == j) {
				ans = 1;
				return;
			}
			dfs(t, j);
		}
	}
}

int main(void) {

	cin >> n;	
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < n; j++) {
			memset(check, false, sizeof(check));
			ans = 0;��
			dfs(i, j);
			cout << ans<<' ';
		}
		cout << '\n';
	}
}
//visit�̸����� arr ���� �� ������ ���� ���ɼ�
//<bits/stdc++.h> ������� ������ visit �Լ��� 
// ���� �迭�� ������ visit �迭 ���� ��ȣ�� �߻�

// dfs(start, end) �������� start = end�� ������ ����
// ������ �ִ� �׷��� �������� �Է� ��������� ��Ī����� �ƴԿ� ����