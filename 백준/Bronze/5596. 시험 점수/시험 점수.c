#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int S = 0, T = 0, i, a;
	for (i = 0; i < 4; i++) {
		scanf("%d", &a);
		S += a;
	}
	for (i = 0; i < 4; i++) {
		scanf("%d", &a);
		T += a;
	}
	if (S == T || S > T) printf("%d", S);
	else printf("%d", T);
	return 0;
}