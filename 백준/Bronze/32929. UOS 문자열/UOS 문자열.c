#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	if (x % 3 == 0) printf("S");
	else if (x + 1 == 0 || (x + 1) % 3 == 0)printf("O");
	else printf("U");
	return 0;
}