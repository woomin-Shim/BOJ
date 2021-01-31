#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[3], idx, tmp=0;

	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	for (int i = 0; i < 3; i++) {	
		int min = 100000000;
		for (int j = i; j < 3; j++) {			
			if (min > arr[j]) {
				min = arr[j];
				idx = j;
			}
		}
		tmp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = tmp;

	}
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << ' ';
	}
}