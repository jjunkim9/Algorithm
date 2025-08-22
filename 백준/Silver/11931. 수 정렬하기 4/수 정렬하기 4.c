#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int arr[1000000];
int cmp(const void *a, const void *b) {
	int x = *(int*)a;
	int y = *(int*)b;
	if (x < y) return 1;
	else if (x > y)return -1;
	else return 0;
}
int main() {
	int N, i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) scanf("%d", &arr[i]);
	qsort(arr, N, sizeof(int), cmp);
	for (i = 0; i < N; i++)printf("%d\n", arr[i]);
	return 0;
}