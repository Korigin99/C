#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

//void modify(int *ptr) { 
//	*ptr = 99; //�޾ƿ� �ּ� �ȿ� ���ο� ������ ����
//}

float average(int s[],int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum += s[i];
	}
	return sum/size;
}

int main(void) {
	//�ּ� ����
	/*int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i�� �ּ�: %u\n", &i);
	printf("c�� �ּ�: %u\n", &c);
	printf("f�� �ּ�: %u\n", &f);
	return 0;*/

	//���� ���� ������ : �����Ͱ� ����Ű�� ���� �������� ������
	/*int i = 10;
	int* p;

	p = &i;
	printf("%u\n", p);
	printf("%d\n", *p);*/

	//���� ���� ȣ��
	/*int number = 1;
	modify(&number); //�ּҸ� ����
	printf("number = %d\n", number); //���ο� ���빰�� ��� */

	//�����Ϳ� �迭
	/*int a[] = { 10,20,30,40,50 };
	int* p;

	p = a + 2;

	printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0], p[1], p[2]);*/

	// *(x+i)�� x[i]�� ����
	
	//
	unsigned char student[SIZE] ={0};
	int i;
	float avg;
	for (i = 0; i < SIZE; i++) 
		student[i] += rand() % 101;
	avg = average(student, SIZE);
	printf("��ռ����� %f �Դϴ�\n", avg);
	return 0;
}