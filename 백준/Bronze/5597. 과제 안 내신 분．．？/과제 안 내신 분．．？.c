#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int S[29];
	int N[2];
	int i, j, k = 0;
	int flag;
	for (i = 1; i < 29; i++) {
		scanf("%d", &S[i]);
	}
	for (i = 1; i < 31; i++) {
		flag = 0;
		for (j = 1; j < 29; j++) {
			if (i == S[j]) flag = 1;
		}
		if (flag == 0) N[k++] = i;
	}
	printf("%d\n%d", N[0], N[1]);
	return 0;
}