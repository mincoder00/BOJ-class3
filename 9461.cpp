#include <bits/stdc++.h>
using namespace std;

int main(void) {
	long long int arr[101];
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;
	for (int i = 6; i <= 100; i++) {
		arr[i] = arr[i - 1] + arr[i - 5];
	}
	int t, n;
	cin >> t ;
	while (t--) {
		cin >> n;
		cout << arr[n]<<'\n';
	}

}

//1, 1, 1, 2, 2, 3, 4, '5', '7', '9', '12', '16', '21', '28'
// �ĵ��� ������ ���� �ſ� ū ���� �� �� �����Ƿ�  long long Ÿ���� ���
// arr[i] = arr[i-2] + arr[i-3]�� ������ �ַ��