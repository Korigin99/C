#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
#include <stdlib.h>
#include <time.h>

main() {
	//rand �Լ��� �迭�� �޾� �ּڰ��� �ִ� ���
	srand((time)NULL);

	int prices[SIZE];
	int i, min,max;

	printf("[");
	for (i = 0; i < SIZE; i++) {
		prices[i] = rand() % 100;
		printf("%d,", prices[i]);
	}
	printf("]\n");

	max = min = prices[0];
	
	for (i = 1; i < SIZE; i++) {
		if (prices[i] < min)
			min = prices[i];
	}

	for (i = 1; i < SIZE; i++) {
		if (prices[i] > max)
			max = prices[i];
	}
	printf("�ּڰ��� %d�Դϴ�.\n�ִ��� %d�Դϴ�.", min, max);
	
}