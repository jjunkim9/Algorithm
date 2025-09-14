#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	long long int k, cnt = 0;
	scanf("%lld", &k);
	while (1) {
		if (k == 1) break;
		if (k % 2 == 0) k /= 2;
		else k++;
		cnt++;
	}
	printf("%lld", cnt);
	return 0;
}