#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[10];
	int max = 0;
	int index;
	for (int i = 1; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	printf("%d\n%d", max, index);
	return 0;
}