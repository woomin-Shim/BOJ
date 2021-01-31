#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	/* 이렇게도 가능하고 
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v;
	int sum = 0, num;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		v.push_back(num);
		sum += num;
	}
	sort(begin(v), end(v));
	cout << sum / 5 << "\n" << v[2];
}
*/
	

	int sum = 0, idx;
	int* arr = new int[5];
	for (int i = 0; i < 5; i++)
		cin >> arr[i], sum += arr[i];

	//sort(arr, arr+5); 배열과 마지막원소를 가리킴, 요걸로 아래 정렬 간단히 가능 
	for (int i = 0; i < 5; i++) {
		int min = 100;
		for (int j = i; j < 5; j++) 
			if (min > arr[j])
				min = arr[j], idx = j;
		int tmp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = tmp;
	} 
	
	
	cout << sum/5 << "\n" << arr[2];
	delete[]arr;
}
