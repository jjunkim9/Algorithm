#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char c[1000001];
int main() {	
	int i, count;
	fgets(c, 1000001, stdin);
	count = 0;
	c[strcspn(c, "\n")] = '\0';
	for (i = 0; c[i]!='\0'; i++) {
		if (c[i] != ' ' && (i == 0 || c[i - 1] == ' ')) count++;
	}
	printf("%d", count);
}