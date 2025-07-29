#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char c[101];
	int i;
	scanf("%s", c);
	for (i = 0; c[i]!='\0'; i++) {
		if (c[i] <= 90) printf("%c", c[i] + 32);
		else printf("%c", c[i] - 32);
	}
	return 0;
}