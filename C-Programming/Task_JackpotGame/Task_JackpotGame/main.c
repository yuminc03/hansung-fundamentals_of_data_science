#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int count = 0;

	while (1)
	{
		count += 1;
		printf("*%d회 게임*\n", count);
		int num1 = (rand() % 7) + 1;
		int num2 = (rand() % 7) + 1;
		int num3 = (rand() % 7) + 1;
		printf("a: %d\n", num1);
		printf("b: %d\n", num2);
		printf("c: %d\n", num3);

		if (num1 == 7 && num2 == 7 && num3 == 7)
		{
			printf("잭팟 성공!\n");
			printf("시도 횟수: %d\n", count);
			break;
		}
		else {
			printf("다음 기회에..\n");
		} // end if
	}
	
	return 0;
}