#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
#include <stdlib.h>
#include <time.h>

main() {
	int i; //중간고사
	int number[SIZE]; //5 짜리 배열 선언
	srand(time(NULL)); //랜드함수 만들기 위한거
	int count[10] = { 0 }; //카운트 함수 10개짜리 배열 0으로 초기화

	for (i = 0; i < SIZE; i++) { 
		number[i] = rand() % 10; //0부터 9까지 랜덤으로 배열에 집어넣기
		printf("number[%d]=%d\n",i,number[i]);
	}
	for (i = 0; i < SIZE; i++) {
		count[number[i]]++; //숫자세기
	}
	for (i = 0; i < 10; i++)
		printf("count[%d]=%d ", i, count[i]);

	//int i, k, tmp; //배열 바꾸기(temp를 활용)
	//int list[SIZE] = { 16,7,9,1,3 };
	//int flag = 0;

	//for (k = 0; k < SIZE; k++) {
	//	for (i = 0; i < SIZE - 1; i++) {
	//		if (list[i] > list[i + 1]) {
	//			tmp = list[i];
	//			list[i] = list[i + 1];
	//			list[i + 1] = tmp;
	//			flag = 1;
	//		}
	//	}
	//	if (flag == 0)
	//		break;
	//}
	//printf("k = %d \n", k);
	//for(i=0;i<size;i++)
	//	printf("%d ", list[i]);	
}