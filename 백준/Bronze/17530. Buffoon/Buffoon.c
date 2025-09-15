#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, i, arr[10000];
	int max = 0, index;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	if (index == 0) printf("S");
	else printf("N");
	return 0;
}