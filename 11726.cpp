#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	long long res[1001]; // �������� �߰��߰� ������ �迭 
	res[1] = 1;
	res[2] = 2;
	for (int i = 3; i <= 1000; i++) {
		res[i] = (res[i - 1] % 10007) + (res[i - 2] % 10007);
		res[i] %= 10007;
	}
	cin >> n;
	cout << res[n];

}
// ���� ���� �� ����.
// ����� ���� ������ Ư��!
//���� ������ Ŀ���� ������ 
// �������� ������ ���ϴ� �ͺ��� �߰��߰��� �����ֱ�.