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

	printf("���� ��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ��ǥ��	�Է��Ͻÿ�:");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p1.y;
	ydiff = p2.x - p2.y;

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);

	printf("�� �� ������ �Ÿ��� %f�Դϴ�.", dist);*/

	//����ü �迭�� �Է¹ޱ�
	/*struct student list[SIZE];
	int i;


	
	for (i = 0; i < SIZE; i++) {
		printf("�й��� �Է��Ͻÿ�:");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�:");
		scanf("%s", &list[i].name);
		printf("������ �Է��Ͻÿ�:");
		scanf("%lf", list[i].grade);
		printf("\n");
	}

	for (i = 0; i < SIZE; i++)
		printf("�й� : %d, �̸� : %s, ���� : %f", list[i].number, list[i].name, list[i].grade);*/

	//�⸻��� ����


	/*struct vector a = { 2,3 };
	struct vector b = { 5,6 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("������ ���� (%f, %f)�Դϴ�.", sum.x, sum.y);*/

	//����ü �Լ�
	/*float x1, y1, x2, y2;
	float sum_x, sum_y;
	printf("ù��° ���͸� �Է��Ͻÿ�:");
	scanf("%f %f", &x1, &y1);
	printf("�ι�° ���͸� �Է��Ͻÿ�:");
	scanf("%f %f", &x2, &y2);

	vector_sum(x1, y1, x2, y2,&sum_x,&sum_y);
	
	printf("������ ���� (%f, %f) �Դϴ�.\n", sum_x, sum_y);*/

	/*float x1, y1, x2, y2;
	float sum_x, sum_y;

	printf("ù��° ����(x1, y1)�� �Է��Ͻÿ�:");
	scanf("%f %f", &x1, &y1);
	printf("ù��° ����(x2, y2)�� �Է��Ͻÿ�:");
	scanf("%f %f", &x2, &y2);
	sum_x = x1 + x2;
	sum_y = y1 + y2;
	printf("������ ���� (%f, %f)�Դϴ�.", sum_x, sum_y);*/

	struct vector v1;
	struct vector v2;
	struct vector sum;
	
	printf("ù��° ����(x1, y1)�� �Է��Ͻÿ�:");
	scanf("%f %f", &v1.x, &v1.y);
	printf("ù��° ����(x2, y2)�� �Է��Ͻÿ�:");
	scanf("%f %f", &v2.x, &v2.y);

	vector_sum(&v1, &v2,&sum);
	printf("������ ����(%f, %f)�Դϴ�\n",sum.x, sum.y);
	
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