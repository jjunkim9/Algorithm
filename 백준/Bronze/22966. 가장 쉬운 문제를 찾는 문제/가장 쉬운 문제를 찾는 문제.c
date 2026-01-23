#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, i, mi, min = 5;
	char c[5][11];
	int a[5];
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%s %d", c[i], &a[i]);
		if (a[i] < min) {
			min = a[i];
			mi = i;
		}
	}
	for (i = 0; c[mi][i] != '\0'; i++)printf("%c", c[mi][i]);
	return 0;
}