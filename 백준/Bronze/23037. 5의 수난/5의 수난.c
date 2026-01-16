#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char c[6];
int main() {
	int sum = 0;
	int total = 0;
	scanf("%s", c);
	for (int i = 0; i < 5; i++) {
		sum = 1;
		for (int j = 0; j < 5; j++) {
			sum *= (c[i]-'0');
		}
		total += sum;
	}
	printf("%d", total);
	return 0;
}