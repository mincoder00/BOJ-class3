#include <bits/stdc++.h>
using namespace std;
int n;
int A[200001];


int func(int p1, int p2) {
	int P[200001] = { 0 }; // ���� �����ϴ� ������ �迭�� 1�� ��ȯ���ִ� ���ο� �迭
	for (int i = 0; i < n; i++) {
		P[i] = (A[i] == p1 || A[i] == p2);
	}
	int ret = 0, cnt = 0;
	for (int i = 0; i < n; i++) {
		if (P[i]) cnt++;
		else {
			cnt = 0;
		}
		ret = max(ret, cnt);
	}
	return ret;
}

int main(void) {
	//���� ���� n�� ���� �Լ� ������ �ߺ� �����ϸ� �ȵ�!!
	int ans = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> A[i];
	}
	for (int i = 1; i <= 9;i++) {
		for (int j = i + 1; j <= 9; j++) {
			ans = max(ans, func(i, j));
		}
	}
	cout << ans;
}