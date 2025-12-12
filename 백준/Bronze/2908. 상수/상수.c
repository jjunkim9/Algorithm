#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[4], b[4];
	char a2[4], b2[4];
	scanf("%s %s", a, b);
	for (int i = 0; i < 3; i++) {
		a2[i] = a[2 - i];
		b2[i] = b[2 - i];
	}
	if (atoi(a2) > atoi(b2)) printf("%d", atoi(a2));
	else printf("%d", atoi(b2));
	return 0;
}