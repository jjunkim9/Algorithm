#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, i, j, n;
	char c;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %c", &n, &c);
		for (j = 0; j < n; j++) printf("%c", c);
		printf("\n");
	}
	return 0;
}