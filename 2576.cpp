#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	/*
	int sum = 0, min = 100;
	int* arr = new int[7];
	int tf;
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 1) {
			sum += arr[i];
			if (min > arr[i])
				min = arr[i];
			tf = 1;
		}
	}
	if (sum == 0)
		cout << "-1\n";
	else
		cout << sum << "\n" << min;
	*/

	int n = 7, sum=0, min=100;
	int odd;
	while (n--) {
		cin >> odd;
		if (odd % 2 == 1) {  //홀수이면 홀수들의 합을 출력하고, 최솟값 출력
			sum += odd;
			if (min > odd)
				min = odd;
		}
	}
	if (sum == 0)
		cout << "-1\n";
	else
		cout << sum << "\n" << min;
	
}