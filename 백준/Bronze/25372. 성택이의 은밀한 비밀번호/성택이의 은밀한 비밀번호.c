#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int n, i;
	char c[21];
	scanf("%d", &n);
	for (i = 0; i < n; i++) { 
		scanf("%s", c);
		if (strlen(c) >= 6 && strlen(c) <= 9) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}