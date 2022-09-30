#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

struct vector {
	float x;
	float y;
};

//struct vector get_vector_sum(struct vector a, struct vector b) {
//	struct vector result;
//	result.x = a.x + b.x;
//	result.y = a.y + b.y;
//
//	return result;
//}

void vector_sum(struct vector* v_1, struct vector* v_2, struct vector* s);

//void vector_sum(float x1, float y1, float x2, float y2, float* sum_x, float* sum_y);

main() {

	/*struct point p1, p2;

	double xdiff, ydiff;
	double dist;

	printf("점의 좌표를 입력하시오:");
	scanf("%d %d", &p1.x, &p1.y);

	printf("점의 좌표를	입력하시오:");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p1.y;
	ydiff = p2.x - p2.y;

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);

	printf("두 점 사이의 거리는 %f입니다.", dist);*/

	//구조체 배열에 입력받기
	/*struct student list[SIZE];
	int i;


	
	for (i = 0; i < SIZE; i++) {
		printf("학번을 입력하시오:");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오:");
		scanf("%s", &list[i].name);
		printf("학점을 입력하시오:");
		scanf("%lf", list[i].grade);
		printf("\n");
	}

	for (i = 0; i < SIZE; i++)
		printf("학번 : %d, 이름 : %s, 학점 : %f", list[i].number, list[i].name, list[i].grade);*/

	//기말고사 공부


	/*struct vector a = { 2,3 };
	struct vector b = { 5,6 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("백터의 합은 (%f, %f)입니다.", sum.x, sum.y);*/

	//구조체 함수
	/*float x1, y1, x2, y2;
	float sum_x, sum_y;
	printf("첫번째 백터를 입력하시오:");
	scanf("%f %f", &x1, &y1);
	printf("두번째 백터를 입력하시오:");
	scanf("%f %f", &x2, &y2);

	vector_sum(x1, y1, x2, y2,&sum_x,&sum_y);
	
	printf("백터의 합은 (%f, %f) 입니다.\n", sum_x, sum_y);*/

	/*float x1, y1, x2, y2;
	float sum_x, sum_y;

	printf("첫번째 벡터(x1, y1)를 입력하시오:");
	scanf("%f %f", &x1, &y1);
	printf("첫번째 벡터(x2, y2)를 입력하시오:");
	scanf("%f %f", &x2, &y2);
	sum_x = x1 + x2;
	sum_y = y1 + y2;
	printf("벡터의 합은 (%f, %f)입니다.", sum_x, sum_y);*/

	struct vector v1;
	struct vector v2;
	struct vector sum;
	
	printf("첫번째 벡터(x1, y1)를 입력하시오:");
	scanf("%f %f", &v1.x, &v1.y);
	printf("첫번째 벡터(x2, y2)를 입력하시오:");
	scanf("%f %f", &v2.x, &v2.y);

	vector_sum(&v1, &v2,&sum);
	printf("벡터의 합은(%f, %f)입니다\n",sum.x, sum.y);
	
}

void vector_sum(struct vector *v_1, struct vector *v_2, struct vector *s){
	//struct vector s;
	s->x = v_1->x + v_2->x;
	s->y = v_1->y + v_2->y;
	return;
}

 /*void vector_sum(float x1, float y1, float x2, float y2,float *sum_x,float *sum_y) {
	*sum_x = x1 + x2;
	*sum_y = y1 + y2;
	return;
}*/






//sum(a) == sum(&a[0])