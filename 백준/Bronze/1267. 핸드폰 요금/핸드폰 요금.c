#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N, i, Y = 0, M = 0;
	int time[20];
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &time[i]);
		Y += time[i] / 30 + 1;
		M += time[i] / 60 + 1;
	}
	Y *= 10;
	M *= 15;
	if (Y == M) printf("Y M %d", Y);
	else if (Y < M)printf("Y %d", Y);
	else printf("M %d", M);
	return 0;
}