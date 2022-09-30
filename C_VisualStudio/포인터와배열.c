#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

//void modify(int *ptr) { 
//	*ptr = 99; //받아온 주소 안에 새로운 내용을 넣음
//}

float average(int s[],int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum += s[i];
	}
	return sum/size;
}

int main(void) {
	//주소 찍어보기
	/*int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소: %u\n", &i);
	printf("c의 주소: %u\n", &c);
	printf("f의 주소: %u\n", &f);
	return 0;*/

	//간접 참조 연산자 : 포인터가 가리키는 값을 가져오는 연산자
	/*int i = 10;
	int* p;

	p = &i;
	printf("%u\n", p);
	printf("%d\n", *p);*/

	//값에 의한 호출
	/*int number = 1;
	modify(&number); //주소를 보냄
	printf("number = %d\n", number); //새로운 내용물이 출력 */

	//포인터와 배열
	/*int a[] = { 10,20,30,40,50 };
	int* p;

	p = a + 2;

	printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0], p[1], p[2]);*/

	// *(x+i)는 x[i]와 같다
	
	//
	unsigned char student[SIZE] ={0};
	int i;
	float avg;
	for (i = 0; i < SIZE; i++) 
		student[i] += rand() % 101;
	avg = average(student, SIZE);
	printf("평균성적은 %f 입니다\n", avg);
	return 0;
}