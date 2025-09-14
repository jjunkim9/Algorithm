#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char s[100000];
int main() {
	int n, i;
	int ecnt = 0;
	int ncnt = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf(" %c", &s[i]);
		if (s[i] == 'e') ecnt++;
		else if (s[i] == '2')ncnt++;
	}
	if (ecnt == ncnt)printf("yee");
	else if (ecnt > ncnt)printf("e");
	else printf("2");
	return 0;
}