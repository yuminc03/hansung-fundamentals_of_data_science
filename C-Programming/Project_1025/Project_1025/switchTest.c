#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;
	int x = 5;

	printf("숫자 입력: ");
	scanf("%d", &number);

	// 문자는 ASCII 코드라서 사용 가능
	// default문은 생략 가능

	switch (number) {
		//case x:
		//	printf("x와 일치합니다.\n");
		//	break;

		//case (x+2):
		//	printf("수식과 일치합니다.\n");
		//	break;

		//case 0.001:
		//	printf("실수\n");
		//	break;

	case 'a':
		printf("문자\n");
		break;

		//case "001":
		//	printf("문자열\n");
		//	break;
	}
	return 0;
}