#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //qsort 사용을 위한 헤더
//qsort : c에서 제공하는 빠른 정렬 함수
int A[100000];
int B[100000];

//오름차순 정렬 : a < b 이면 음수, a == b면 0, a > b이면 양수 반환
int cmp(const void* a, const void* b) {
	int n1 = *(int*)a; //void* -> int* 변환 후 값 꺼냄
	int n2 = *(int*)b;
	if (n1 > n2) return 1;
	else if (n1 < n2)return -1;
	else return 0;
}
int search(int arr[], int n, int f) { //이분 탐색 함수 (f를 찾음)
	int left = 0;
	int right = n - 1;
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] == f)return 1; //바로 찾을 시
		else if (arr[mid] < f) left = mid + 1;
		else right = mid - 1;
	}
	return 0; //찾지 못함
}
int main() {
	int N, M, i, f;
	scanf("%d", &N);
	for (i = 0; i < N; i++) scanf("%d", &A[i]);
	
	//qsort(정렬할 값의 주소, 요소의 개수, 요소의 크기, 기준 함수)
	//기준함수 : 정렬 방식의 기준이 되는 함수
	qsort(A, N, sizeof(int), cmp); //오름차순 정렬

	scanf("%d", &M);
	for (i = 0; i < M; i++) {
		scanf("%d", &f);
		if (search(A, N, f)) printf("1\n");
		else printf("0\n");
	}
	return 0;
}