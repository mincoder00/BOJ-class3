#include <bits/stdc++.h>
using namespace std;
#define fast cin.tie(0); cout.tie(0); ios::sync_with_stdio(false)
int main(void) {
	fast;
	map <string, int> pokemon; // ���� hash map
	vector<string> name; // name ����
	int n, m;
	string temp; 
	cin >> n >> m;
	vector<string> result; // result ����
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		name.push_back(temp);
		pokemon.insert(make_pair(temp, i));
	}
	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (temp[0] >= 65 && temp[0] <= 90) {// ���ϸ� �̸��� ��
			result.push_back(to_string(pokemon[temp]));
		}
		else result.push_back(name[stoi(temp)-1]);  // ��ȣ�� ��
	}
	for (int i = 0; i < m; i++) cout << result[i]<<'\n';
}
//���ʹ� �Է¹��� �� �������� ũ�Ⱑ �����Ǳ� ������
//0�ε������� ���� ���ϸ� OUT		OF RANGE ���� 
// vector pair �ڷ������� �õ������� �ð��ʰ�
// hash map �� �������!
// �ƽ�Ű �ڵ�� A = 65, Z=90
//�ؽ� �ʿ� key������ ���ϸ� �̸� value ������ ���� ��ȣ�� ����
// name�迭�� ����� ���ϸ� �̸��� ���� ��ȣ��� ����