#include <iostream>
#include <string>
#include <vector>
using namespace std;
char map[8][9];  //문자열 끝에는 NULL값이

int main() {
	int cnt=0;
	
	for (int i = 0; i < 8; i++)
		scanf("%s", &map[i]);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && map[i][j] == 'F')
				cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}

