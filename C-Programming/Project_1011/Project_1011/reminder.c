#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, quotient, remainder;

	printf("두 양의 정수를 입력하세요: ");
	scanf("%d %d", &a, &b);

	quotient = a / b;
	remainder = a % b;

	printf("%d를 %d로 나눈 몫: %d, 나머지: %d", a, b, quotient, remainder);
	return 0;
}