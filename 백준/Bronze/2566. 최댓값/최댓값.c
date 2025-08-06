#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[9][9];
	int i, j, max = -1, mi, mj;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > max) {
				max = arr[i][j];
				mi = i;
				mj = j;
			}
		}
	}
	printf("%d\n%d %d", max, mi + 1, mj + 1);
	return 0;
}