#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int X, Y, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &X, &Y);
		if (X >= Y) printf("MMM BRAINS\n");
		else printf("NO BRAINS\n");
	}
	return 0;
}