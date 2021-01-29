#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	int money, big=0;
	cin >> a >> b >> c;
	big = a;
	if (b > a && b > c)
		big = b;
	else if (c > a && c > b)
		big = c;
	else
		big = a;

	if (a == b && a == c)
		money = 10000 + a * 1000;
	else if (a == b)// && a != c)
		money = 1000 + a * 100;
	else if (a == c)// && a != b)
		money = 1000 + a * 100;
	else if (b == c)// && b != a)  
		money = 1000 + b * 100;
	else
		money = big * 100;
	
	cout << money;

}