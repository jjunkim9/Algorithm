#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, i, j, n[100];
	scanf("%d", &t);
	for (i = 0; i < t; i++)scanf("%d", &n[i]);
	for (i = 0; i < t; i++) {
		for (j = 0; j < n[i]; j++) printf("=");
		printf("\n");
	}
	return 0;
}