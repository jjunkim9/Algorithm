#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, i, a[1000], b[1000];
	scanf("%d", &t);
	for (i = 1; i <= t; i++) scanf("%d %d", &a[i], &b[i]);
	for (i = 1; i <= t; i++)printf("Case %d: %d\n", i, a[i] + b[i]);
	return 0;
}