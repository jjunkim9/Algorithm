#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, x, y, i, j, k;
	int s = 0;
	int p[100][100] = { 0 };
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %d", &x, &y);
		for (j = x; j < x + 10; j++) {
			for (k = y; k < y + 10; k++) {
				p[j][k] = 1;
			}
		}
	}
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			if (p[i][j] == 1) s++;
		}
	}
	printf("%d", s);
	return 0;
}