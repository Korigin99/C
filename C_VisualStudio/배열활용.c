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
	//학생 점수 랜덤으로 받은 후 배열에 저장후 함수로 평균, 총점 계산하기
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
	printf("\n\n최대값은 %d 이고, 최소값은 %d입니다.", max, min);
	printf("\n총점은 %d이고, 평균은 %f입니다.", sum, avg);
	printf("\n\n최대값은 %d 이고, 최소값은 %d입니다.", max, min);
	printf("\n총점은 %d이고, 평균은 %f입니다.", sum, avg);
	*/

	//배열에 문자열 넣어서 출력하기
	/*char a[6] = { 'h','e','l','l','o','\0'};
	printf("%s", a);*/

	//배열에 문자열 넣어서 길이 새기
	/*char str[] = "A barking dog never bites";
	int i = 0;

	while (str[i] != 0)
		i++;
	printf("문자열 %s의 길이는 %d입니다.", str, i);*/

	//배열로 글자를 받아서 글자 수 새기
	/*char str[100];
	int count;

	printf("문자열을 입력하시오:");
	scanf("%s", str);

	count = count_string(str);

	printf("입력한 문자의 개수는 %d입니다.", count);*/

	//getch 이용하기
	/*int ch;
	while (1) {
		printf("문자를 입력하시오:");
		ch = _getche();
		if (ch == 'b')
			break;
		printf("\n입력한 문자는 '");
		_putch(ch);
		printf("' 입니다.\n");
	}*/
	
	//gets 이용하기
	/*char name[100];
	char address[100];

	printf("이름이 어떻게 되시나요?");
	gets_s(name, 99);
	printf("어디사나요?");
	gets_s(address, 99);

	printf("안녕하세요. %s에 사는 %s씨.\n", address, name);*/

	char s[] = "abcdefgh";
	char d[9] = s;
	int len = strlen(s);	
	printf("문자열 %s의 길이 = %d\n", d, len);
}