#include <bits/stdc++.h>
using namespace std;
int ans = 0;
int n, r, c;

void dc(int y, int x, int size) {//���� ����, ��.�� size
	if ((y == r) && (x == c)) {
		cout<< ans;
		return;
	}
	else if ((r<y+size) && (c<x+size)&&(y<=r)&&(x<=c)) {//���� �� ����  p.s) ��� �Լ� ȣ�� ����
		dc(y, x, size / 2);
		dc(y, x+size / 2, size / 2);	
		dc(y + size / 2, x, size / 2);
		dc(y + size / 2, x + size / 2, size / 2);
	}
	else {//���� �ٲ���!
		ans += size*size;
	}

}

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> r >> c;
	dc(0, 0, pow(2, n));
	return 0;
}


//divide conquer ������ ���� �������̽��� �������� �κ��� ����ϱ⺸�ٴ�
//���� ū �׸� ¥��
//���ϴ� �ó������� �� ������ ���ǹ��� ���� ������ �����غ���
//�޸� �ʰ� ������ �ַ� ��� ȣ���� �ʹ� ������� �޸� �ʰ�