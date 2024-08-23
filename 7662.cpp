#include <bits/stdc++.h>
using namespace std;

priority_queue <int, vector<int>, less<int>> maxHeap; // �ִ� ������ ���� �ִ���
priority_queue <int, vector<int>, greater<int>> minHeap; // �ּڰ� ������ ���� �ּ���
map <int, int>cnt; // �� ������ �ܿ� ������ �����ϴ� map

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t, k, n;
	char op;

	cin >> t;
	while (t--) {	
		/*�ʱ�ȭ*/
		cnt.clear();
		while (!maxHeap.empty()) maxHeap.pop();
		while (!minHeap.empty()) minHeap.pop();
		cin >> k;

		/*���� ����*/
		while (k--) {
			cin >> op >> n;
			if (op == 'I') {//����
				cnt[n]++;
				maxHeap.push(n);
				minHeap.push(n);
			}
			if (op == 'D') {//����
				if (n == 1&& !maxHeap.empty()) {//�ִ� ����
					cnt[maxHeap.top()]--;
					maxHeap.pop();
				}
				else if (n == -1 &&!minHeap.empty()) {//�ּڰ� ����
					cnt[minHeap.top()]--;
					minHeap.pop();
				}
				//���� ť������ ���� ������ �ٸ� ť������ �ݿ�
				while (!maxHeap.empty() && cnt[maxHeap.top()] == 0) maxHeap.pop();
				while (!minHeap.empty() && cnt[minHeap.top()] == 0) minHeap.pop();

			}
		}
		/*���� ���*/
		if (maxHeap.empty() || minHeap.empty()) {
			cout << "EMPTY\n";
		}
		else cout << maxHeap.top() << ' ' << minHeap.top()<<'\n';
	}
}