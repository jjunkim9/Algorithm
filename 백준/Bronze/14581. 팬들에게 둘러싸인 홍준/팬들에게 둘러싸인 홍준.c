#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, j;
	char c[21];
	scanf("%s", c);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == 1 && j == 1) {
				printf(":%s:", c);
			}
			else printf(":fan:");
		}
		printf("\n");
	}
	return 0;
}