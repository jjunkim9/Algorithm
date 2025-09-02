#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, a, b, c, d, e, sum = 0;
	scanf("%d", &t);
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a == t)sum++;
	if (b == t)sum++;
	if (c == t)sum++;
	if (d == t)sum++;
	if (e == t)sum++;
	printf("%d", sum);
	return 0;
}