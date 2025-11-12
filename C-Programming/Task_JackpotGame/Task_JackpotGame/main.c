#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int attemptCount = 0; // 게임 시도 횟수
	int jackpotWins = 0; // 7-7-7 잭팟 횟수 (1이 되었을 때 게임 종료)
	int tripleWins = 0; // 7-7-7 잭팟 횟수를 제외한 트리플 횟수(예시: 3-3-3)
	int pairWins = 0; // 2개만 일치하는 횟수 (예시: 2-1-2)

	printf("=========================================================");
	printf("잭팟 게임을 시작합니다! 7-7-7이 나오면 게임은 종료됩니다.");
	printf("=========================================================");

	while (jackpotWins == 0)
	{
		attemptCount += 1;
		printf("*%d회 게임*\n", attemptCount);
		int num1 = (rand() % 7) + 1;
		int num2 = (rand() % 7) + 1;
		int num3 = (rand() % 7) + 1;
		printf("a: %d\n", num1);
		printf("b: %d\n", num2);
		printf("c: %d\n", num3);

		if (num1 == 7 && num2 == 7 && num3 == 7)
		{
			printf("잭팟 성공!\n");
			printf("시도 횟수: %d\n", attemptCount);
			break;
		}
		else {
			printf("다음 기회에..\n");
		} // end if
	}
	
	return 0;
}