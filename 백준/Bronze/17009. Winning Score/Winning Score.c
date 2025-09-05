#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, i;
	int a = 0, b = 0;
	for (i = 3; i > 0; i--) {
		scanf("%d", &n);
		a += n * i;
	}
	for (i = 3; i > 0; i--) {
		scanf("%d", &n);
		b += n * i;
	}
	if (a > b) printf("A");
	else if (b > a)printf("B");
	else printf("T");
	return 0;
}