#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 9, sum = 0;
	while (n--) {
		int people;
		cin >> people;
		sum += people;
	}
}