#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	/* int n1, n2;
	cin >> n1 >> n2;
	int* arr = new int[n1];
	for (int i = 0; i < n1; i++)
		cin >> arr[i];
	for (int i = 0; i < n1; i++) {
		if (arr[i] < n2)
			cout << arr[i] << " ";
	}
	delete[]arr; */

	int N, X, A;
	cin >> N >> X;
	
	while (N--) {
		cin >> A;
		if (A < X) cout << A << ' ';
	}
}


			


	



