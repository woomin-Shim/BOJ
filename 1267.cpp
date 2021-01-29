#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	int num, time;  //통화 개수, 시간
	int t1 = 0, t2 = 0;
	cin >> num;
	while (num--) {
		cin >> time;
		int y = (time / 30 + 1) * 10;
		int m = (time / 60 + 1) * 15;
		t1 += y;
		t2 += m;
	}
	if (t1 < t2)
		cout << "Y " << t1;
	else if (t1 > t2)
		cout << "M " << t2;
	else
		cout << "Y M " << t1;
}