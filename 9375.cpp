#include <bits/stdc++.h>
using namespace std;

int main(void) {
	map <string, int> cloth;	//�� ������ ������ �����ϴ� ��
	map <string, int> ::iterator iter;
	int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		int ans = 1;	
		cloth.clear();
		while (n--) {
			string a, b;
			cin >> a >> b;
			cloth[b]++;
		}
		for (iter = cloth.begin(); iter != cloth.end(); iter++) {
			ans *= iter->second + 1;
		}
		cout << ans -1 << '\n';
	}
}
//iter = cloth.begin(); iter != cloth.end(); iter++ �� ����ؼ� ��ȸ 