#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SIZE 20

	/*int clac(int data[], int* min, int* max, float* avg) {
	
	int sum=0;
	*min = *max = sum = data[0];
	for (int i = 1; i < SIZE; i++) {
		sum = sum + data[i];
		if (*min > data[i])
			*min = data[i];
		if (*max < data[i])
			*max = data[i];
	}
	*avg = (float)sum / SIZE;
}*/

 /*int count_string(char* str) {
	int i = 0;
	while (str[i] != 0)
		i++;
	str = i;
}*/

main() {
	//�л� ���� �������� ���� �� �迭�� ������ �Լ��� ���, ���� ����ϱ�
	/*int score[SIZE];
	int min, max;
	int i;
	int sum=0;
	float avg=0;

	srand(time(NULL));
	for (i = 0; i < SIZE; i++) {
		score[i] = rand() % 101;
		printf("score[%d]=%d\n", i, score[i]);
	}

	

	clac(&score, &min, &max, &avg);
	/*for (i = 1; i < SIZE; i++) {
		sum = sum + score[i];
		if (min > score[i])
			min = score[i];
		if (max < score[i])
			max = score[i];
	}
	avg = (float)sum / SIZE;
	printf("\n\n�ִ밪�� %d �̰�, �ּҰ��� %d�Դϴ�.", max, min);
	printf("\n������ %d�̰�, ����� %f�Դϴ�.", sum, avg);
	printf("\n\n�ִ밪�� %d �̰�, �ּҰ��� %d�Դϴ�.", max, min);
	printf("\n������ %d�̰�, ����� %f�Դϴ�.", sum, avg);
	*/

	//�迭�� ���ڿ� �־ ����ϱ�
	/*char a[6] = { 'h','e','l','l','o','\0'};
	printf("%s", a);*/

	//�迭�� ���ڿ� �־ ���� ����
	/*char str[] = "A barking dog never bites";
	int i = 0;

	while (str[i] != 0)
		i++;
	printf("���ڿ� %s�� ���̴� %d�Դϴ�.", str, i);*/

	//�迭�� ���ڸ� �޾Ƽ� ���� �� ����
	/*char str[100];
	int count;

	printf("���ڿ��� �Է��Ͻÿ�:");
	scanf("%s", str);

	count = count_string(str);

	printf("�Է��� ������ ������ %d�Դϴ�.", count);*/

	//getch �̿��ϱ�
	/*int ch;
	while (1) {
		printf("���ڸ� �Է��Ͻÿ�:");
		ch = _getche();
		if (ch == 'b')
			break;
		printf("\n�Է��� ���ڴ� '");
		_putch(ch);
		printf("' �Դϴ�.\n");
	}*/
	
	//gets �̿��ϱ�
	/*char name[100];
	char address[100];

	printf("�̸��� ��� �ǽó���?");
	gets_s(name, 99);
	printf("���糪��?");
	gets_s(address, 99);

	printf("�ȳ��ϼ���. %s�� ��� %s��.\n", address, name);*/

	char s[] = "abcdefgh";
	char d[9] = s;
	int len = strlen(s);	
	printf("���ڿ� %s�� ���� = %d\n", d, len);
}