#include <iostream>
#include <algorithm>
using namespace std;

//문제 잘 읽기!! , B가 최대 10의 15승이니 int의 범위를 넘어서므로 long long으로 표현해야함!
//두 수가 같을 떄, A>B일 때 고려해야 한다. 
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