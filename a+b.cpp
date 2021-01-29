#include <iostream>
#include <cstdio>
using namespace std;


int main() {
	/*int TestCase;
	cin >> TestCase;
	while (TestCase--) {
		int a, b;
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0; */

	int TestCase, a, b;
	scanf("%d", &TestCase);
	while (TestCase--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}