#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int Ur, Tr, Uo, To, score;
	scanf("%d %d %d %d", &Ur, &Tr, &Uo, &To);
	score = (56 * Ur) + (24 * Tr) + (14 * Uo) + (6 * To);
	printf("%d", score);
	return 0;
}