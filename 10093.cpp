#include <iostream>
#include <algorithm>
using namespace std;

//���� �� �б�!! , B�� �ִ� 10�� 15���̴� int�� ������ �Ѿ�Ƿ� long long���� ǥ���ؾ���!
//�� ���� ���� ��, A>B�� �� ����ؾ� �Ѵ�. 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long A, B;
	cin >> A >> B;

	if (A == B) cout << 0 << "\n";
	if (A > B) swap(A, B);
	if (A != B) {
		cout << B - A - 1 << "\n";
		for (long long i = A + 1; i < B; i++)
			cout << i << ' ';
		cout << "\n";
	}
}