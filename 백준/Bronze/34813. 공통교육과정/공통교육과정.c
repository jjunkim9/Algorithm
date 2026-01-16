#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char c[9];
	scanf("%s", c);
	switch (c[0]) {
	case 'F':
		printf("Foundation");
		break;
	case 'C':
		printf("Claves");
		break;
	case 'V':
		printf("Veritas");
		break;
	case 'E':
		printf("Exploration");
		break;
	}
	return 0;
}