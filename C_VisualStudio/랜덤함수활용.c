#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
#include <stdlib.h>
#include <time.h>

main() {
	int i; //�߰����
	int number[SIZE]; //5 ¥�� �迭 ����
	srand(time(NULL)); //�����Լ� ����� ���Ѱ�
	int count[10] = { 0 }; //ī��Ʈ �Լ� 10��¥�� �迭 0���� �ʱ�ȭ

	for (i = 0; i < SIZE; i++) { 
		number[i] = rand() % 10; //0���� 9���� �������� �迭�� ����ֱ�
		printf("number[%d]=%d\n",i,number[i]);
	}
	for (i = 0; i < SIZE; i++) {
		count[number[i]]++; //���ڼ���
	}
	for (i = 0; i < 10; i++)
		printf("count[%d]=%d ", i, count[i]);

	//int i, k, tmp; //�迭 �ٲٱ�(temp�� Ȱ��)
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