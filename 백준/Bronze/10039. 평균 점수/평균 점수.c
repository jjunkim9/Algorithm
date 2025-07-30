#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int sum = 0, score, i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &score);
		if (score >= 40) sum += score;
		else sum += 40;
	}
	printf("%d", sum / 5);
}