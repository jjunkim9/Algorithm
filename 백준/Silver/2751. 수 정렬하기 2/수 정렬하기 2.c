#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //qsort 사용을 위한 헤더
//qsort : c에서 제공하는 빠른 정렬 함수

int arr[1000000];

//오름차순 정렬 : a < b 이면 음수, a == b면 0, a > b이면 양수 반환
int cmp(const void* a, const void* b) {
	int n1 = *(int*)a; //void* -> int* 변환 후 값 꺼냄
	int n2 = *(int*)b;
	if (n1 > n2) return 1;
	else if (n1 < n2)return -1;
	else return 0;
}

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), cmp); //cmp : compare - 비교하다
	for (i = 0; i < n; i++) printf("%d\n", arr[i]);
	return 0;
}