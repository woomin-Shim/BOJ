#include <iostream>
using namespace std;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);

		int a, b, c, d;
		int n = 3;
		while (n--) {
			cin >> a >> b >> c >> d;
			int sum = a + b + c + d;

			switch (sum) {
			case 0: cout << "D\n"; // À·
				break;
			case 1: cout << "C\n"; // °É
				break;
			case 2: cout << "B\n"; // °³
				break;
			case 3: cout << "A\n"; // µµ
				break;
			case 4: cout << "E\n"; //¸ð
				break;
			}
		}
}