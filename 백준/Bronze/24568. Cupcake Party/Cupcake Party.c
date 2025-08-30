#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int r, s, total;
	scanf("%d %d", &r, &s);
	total = (r * 8) + (s * 3);
	printf("%d", total - 28);
	return 0;
}