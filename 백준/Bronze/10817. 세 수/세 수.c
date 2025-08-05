#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[3];
	int i, j, tmp;
	for (i = 0; i < 3; i++) scanf("%d", &arr[i]);
	for (i = 0; i < 3; i++) {
		for (j = i; j > 0; j--) {
			if (arr[j] < arr[j - 1]) {
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
	printf("%d", arr[1]);
	return 0;
}