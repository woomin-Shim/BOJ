#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int year, n;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0)
		n = 1;
	else if (year % 400 == 0)
		n = 1;
	else
		n = 0;
	cout << n;
}