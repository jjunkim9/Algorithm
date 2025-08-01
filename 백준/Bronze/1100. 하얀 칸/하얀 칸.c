#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int cnt = 0, i, j;
	char chess[8][8];
	for (i = 0; i < 8; i++) {
		scanf("%s", chess[i]);
	}
	for (i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < 7; j += 2) {
				if (chess[i][j] == 'F') cnt++;
			}
		}
		else {
			for (j = 1; j < 8; j += 2) {
				if (chess[i][j] == 'F') cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}