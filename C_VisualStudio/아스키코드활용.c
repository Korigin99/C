#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


main() {
	char alpha,d,s;

	while (1) {

		printf("대소문자를 입력해주세요:");
		scanf("%c", &alpha);

		if (alpha < 'A' && alpha > 'z')
			continue;
		if (alpha == '*')
			break;

		if (alpha < 'A' && alpha>'Z') {
			d = alpha + 32;
			printf("%c", d);
		}
		else if (alpha < 'a' && alpha>'z') {
			s = alpha - 32;
			printf("%c", s);
		}
	}
}