#include <iostream>	
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		int A, B;
		cin >> A >> B;
		cout << A + B << "\n";
	}
}