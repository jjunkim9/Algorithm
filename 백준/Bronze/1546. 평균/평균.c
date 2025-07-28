#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float score[1000];
int main() {
	int N, i;
	float max = 0, sum = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%f", &score[i]);
		if (score[i] > max) max = score[i];
	}
	for (i = 0; i < N; i++) {
		score[i] = (score[i] / max) * 100;
		sum += score[i];
	}
	printf("%.2f", sum / N);
}