#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string S;
	int cnt = 0;
	int k = 0;
	int n, m;
	cin >> n;
	cin >> m;
	cin >> S;
	for (int i = 0; i < m;i++)
	{
		if (S[i] == 'O') continue;
		else {
			while (S[i + 1] == 'O' && S[i + 2] == 'I') {
				k++;
				i += 2;
				if (k == n) {
					k--;
					cnt++;
				}
			}
			k = 0;
		}
	}
	cout << cnt;
}
//substr(7, 5)�� 7�� �ε������� �����Ͽ� 5��
//������ ���꽺Ʈ�� ����� ���� �κ����� 
//while�� O(n)�� ��� ���
//'IOI'�� ������ �ذ�!!