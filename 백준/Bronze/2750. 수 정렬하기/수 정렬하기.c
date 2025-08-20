#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, j, N, tmp, arr[1000];
	scanf("%d", &N);
	for (i = 0; i < N; i++) scanf("%d", &arr[i]);
	for (i = 0; i < N; i++) {
		for (j = i; j > 0; j--) {
			if (arr[j] < arr[j - 1]) {
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
	for (i = 0; i < N; i++) printf("%d\n", arr[i]);
	return 0;
}