#include <bits/stdc++.h>
using namespace std;

int main(void) {
	priority_queue < pair<int, int>, vector <pair <int, int>>, greater <pair<int, int>>> pq;
	int t;
	cin >> t;
	while (t--) {
		int op;
		cin >> op;
		if (op == 0) {
			if (pq.empty()) {
				cout << '0' << '\n';
			}
			else {
				if (pq.top().second < 0) {
					cout << -pq.top().first << '\n';
				}
				else cout << pq.top().first << '\n';
				pq.pop();
			}
		}
		else {
			if (op > 0) {
				pq.push({ op, 1 });
			}
			else {
				pq.push({ -op, -1 });
			}
		}
	}

}

//�켱���� ť���� ������ ������ �켱���� , ������ ������ ���� ����
//���� flag �������� �������� pair������ ������ -1 �ο�, -�ٿ��� ���� ��
// ����� �� second�� -1(������� ��) �̸� -first�� ���
// �켱���� ť�� pair ���� �� ù��°�Ű� �켱���� ������ �ι�°�ŷ� ��
