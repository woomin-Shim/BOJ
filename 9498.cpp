#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	int num;
	cin >> num;
	if (num >= 90)
		cout << "A\n";
	else if (num >= 80)
		cout << "B\n";
	else if (num >= 70)
		cout << "C\n";
	else if (num >= 60)
		cout << "D\n";
	else
		cout << "F\n";
}