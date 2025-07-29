#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char S[1001];
int main() {
	int i;
	scanf("%s", &S);
	scanf("%d", &i);
	printf("%c", S[i-1]);
	return 0;
}