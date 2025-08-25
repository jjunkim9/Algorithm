#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x[100], y[100];
	int t, i;
	scanf("%d", &t);
	for (i = 0; i < t; i++) scanf("%d %d", &x[i], &y[i]);
	for (i = 0; i < t; i++)printf("%d\n", x[i] + y[i]);
	return 0;
}