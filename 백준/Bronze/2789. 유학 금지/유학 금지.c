#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char c[101];
	int i;
	scanf("%s", c);
	for (i = 0; c[i] != '\0'; i++) {
		switch (c[i]) {
		case 'C':
		case 'A':
		case 'M':
		case 'B':
		case 'R':
		case 'I':
		case 'D':
		case 'G':
		case 'E':
			break;
		default :
			printf("%c", c[i]);
			break;
		}
	}
	return 0;
}