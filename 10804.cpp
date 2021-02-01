#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	/*
	int* card = new int[20];
	for (int i = 0; i < 20; i++)
		card[i] = i + 1;  // 1~20 저장
	int n = 10;
	while (n--) {
		int a, b;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			if (a == b)break;
			int tmp = card[i - 1];
			card[i - 1] = card[b - 1];
			card[b - 1] = tmp;
			 b -= 1;
		}
	}
	for (int i = 0; i < 20; i++)
		cout << card[i] << ' ';
}

*/
	vector<int> v(21);  //편하게 1부터 20으로 설정
	for (int i = 1; i < 21; i++)
		v[i] = i;
	int n = 1;
	while (n--) {
		int a, b;
		cin >> a >> b;
		reverse(v.begin()+a, v.begin()+b+1);
	}
	for (int i = 1; i < 21; i++)
		cout << v[i] << ' ';
}