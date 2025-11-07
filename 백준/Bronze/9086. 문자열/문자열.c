#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char c[10][1001];
int main() {
	int t, i;
	char a[10][2];
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%s", c[i]);
		a[i][0] = c[i][0];
		a[i][1] = c[i][strlen(c[i]) - 1];
	}
	for (i = 0; i < t; i++) printf("%c%c\n", a[i][0], a[i][1]);
	return 0;
}