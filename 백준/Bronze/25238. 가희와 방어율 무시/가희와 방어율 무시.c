#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, s;
	scanf("%d %d", &a, &b);
	s = a * (100 - b) / 100;
	if (s >= 100)printf("0");
	else printf("1");
	return 0;
}