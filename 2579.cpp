#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int step[301]; // �� ����� ����
	int arr[301];  // �ش� ��ܱ��� �����ϴ� �ְ� ����
	for (int i = 1; i <= n; i++) cin >> step[i];
	arr[1] = step[1];
	arr[2] = step[1]+step[2];
	arr[3] = step[3] + max(step[1], step[2]);
	for (int i = 4; i <= n; i++) {
		arr[i] = step[i] + max(arr[i - 2], arr[i - 3] + step[i - 1]);
	}
	cout << arr[n];

}

//arr[4] = step[4] + max(arr[2], arr[1] + step[3]);
//arr[5] = step[5] + max(arr[3], arr[2] + step[4]);
//�ᱹ�� ������ �����ϴ� ��ȭ�� �߰��ϱ�!