#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
//�ִ�����

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
//�ּҰ����
int main(void) {
	int m, n, x, y, t;
	cin >> t;
	while (t--) {
		int result=-1;
		int res_y=0;
		cin >> m >> n >> x >> y;
		int maxi = lcm(m, n);
		for (int i = x;i <= maxi;i+=m) { // x=2�̶�� 2���� �����ؼ� <2,5> (m=10,n=6)
			res_y = (i % n); //2 ,12, 22 ,32, �߿��� 6�� ���� �������� 5�ΰ�?
			if (res_y == 0) {
				res_y = n;

			}
			if (res_y == y) {
				result = i;
				break;
			}
		}
		cout << result << '\n';
	}
	
}