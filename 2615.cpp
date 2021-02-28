#include <iostream>
using namespace std;

int search1(int first, int i, int j) {
	int cnt = 1;
	for (; first == map[i][j + 1]; j++) cnt++;  //for(초기값, 조건문, 증가값)
	return cnt == 5 ? 1 : 0;
}
int search2(int first, int i, int j) {
	int cnt = 1;
	for (; first == map[i + 1][j]; i++) cnt++;
	return cnt == 5 ? 1 : 0;
}
int search3(int first, int i, int j) {
	int cnt = 1;
	for (; first == map[i - 1][j + 1]; i--, j++) cnt++;
	return cnt == 5 ? 1 : 0;
}
int map[21][21];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 20; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 20; j++) {
			if((map[i][j] != map[i][j-1]) && )
		}
	}

	
}