#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char c[1000001];
	int i;
	scanf("%s", c);
	for (i = 0; c[i] != '\0'; i++) printf("%c", c[i] - 32);
	return 0;
}