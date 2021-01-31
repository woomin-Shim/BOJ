#include <iostream>	
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A, B, C, tot;
	cin >> A >> B >> C;
	tot = A * B * C;
	int count[10] = { 0 };

	while (tot > 0) {
		int rest;
		rest = tot % 10;  //³ª¸ÓÁö
		count[rest]++;
		tot /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << count[i] << "\n";
}

