#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //qsort 사용
int card[500001];

int cmp(const void* a, const void* b) {
	int x = *(int*)a;
	int y = *(int*)b;
	if (x < y) return -1;
	if (x > y)return 1;
	return 0;
}

int search(int arr[], int n, int t) { //이진 탐색
	int left = 0, right = n - 1, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] == t)return 1;
		else if (arr[mid] < t)left = mid + 1;
		else right = mid - 1;
	}
	return 0;
}

int main() {
	int n, m, i, a;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	qsort(card, n, sizeof(int), cmp);
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &a);
		printf("%d ", search(card, n, a));
	}
	return 0;
}