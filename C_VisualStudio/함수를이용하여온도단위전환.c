#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//float FtoC(float temp_f); // 1.ȭ���� ������ ��ȯ

main() {
	// 1.ȭ���� ������ ��ȯ
	float c, f; //�Լ����� ����

	printf("ȭ�� �µ��� �Է��Ͻÿ�:");
	scanf("%f", &f);

	c = ftoc(f); //�Լ� ȣ��

	printf("ȭ���µ� %f�� �����µ� %f�Դϴ�.\n", f, c);
}

float ftoc(float temp_f) {
	float temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
	return temp_c;
}

