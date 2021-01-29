#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int* arr = new int[9];
	int big, idx=1;
	for (int i = 0; i < 9; i++)
		cin >> arr[i];
	big = arr[0];
	for (int i = 1; i < 9; i++) {
		if (arr[i] > big) {
			big = arr[i];
			idx = i+1;  // idx initializing 주의하기 
		}
		
	}
	cout << big << "\n" << idx;
}