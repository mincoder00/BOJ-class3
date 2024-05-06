#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long n, m;
	long long start, end, mid, sum = 0;
	int max = -1;
	cin >> n >> m;
	long long* arr = new long long[n + 1];
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	start=0;
	end = arr[n - 1];
	while (start <= end) {
		sum = 0;
		mid = (start + end) / 2;
		for (int i = 0; i < n; i++) {
			if (arr[i] < mid) continue;
			else sum += arr[i] - mid;
		}
		if (sum >= m) {
			start = mid + 1;
			if (mid > max) max = mid;
		}
		else end = mid - 1;
	}
	cout << max;
}
//4 42 40 26 46
//�����ϸ�
//4 26 40 42 46
//mid = 23
//���࿡ mi= 23�϶� sum>=m�̶�� 23���� ���� mid �� ���ؼ��� ���� ����� �ʿ䰡 ����
//('��� m'�� �����߱� ������ ���� �� ���� �ʿ䰡 ����)
// 23���� �����ʿ� �ش��ϴ� �� 23~46���� ���̿��� ���
// (24+46)/2  = 35 
//sum>=m�� ����� mid������ max�� �����鼭 �������� max�� ��� ���� ����

