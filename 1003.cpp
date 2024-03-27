#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int DP[41][2];
    DP[0][0] = 1;
    DP[0][1] = 0;
    DP[1][0] = 0;
    DP[1][1] = 1;
    for (int i = 2; i <= 40;i++) {
        DP[i][0] = DP[i - 1][0] + DP[i - 2][0];
        DP[i][1] = DP[i - 1][1] + DP[i - 2][1];
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;��
        cout << DP[n][0] << ' ' << DP[n][1] << '\n';
    }
}
//����Լ� ->�ð��ʰ�
//DP
// [N]       [0���Ƚ��]           [1���Ƚ��]
//0      1                  0
//1      0                  1
//2      1                  1
//3      1                  2  
//4      2                  3  

//N�� 40�� �ִ�� ũ�� �����ϱ� �ѹ��� �迭 �� ����� �� ȣ���ϱ�