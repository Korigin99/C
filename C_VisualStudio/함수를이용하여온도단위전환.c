#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//float FtoC(float temp_f); // 1.화씨를 섭씨로 전환

main() {
	// 1.화씨를 섭씨로 전환
	float c, f; //함수원형 정의

	printf("화씨 온도를 입력하시오:");
	scanf("%f", &f);

	c = ftoc(f); //함수 호출

	printf("화씨온도 %f은 섭씨온도 %f입니다.\n", f, c);
}

float ftoc(float temp_f) {
	float temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
	return temp_c;
}

