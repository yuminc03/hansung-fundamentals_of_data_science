#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int salary;
	int workDay;
	int trafficExpenses;
	int mealExpenses;
	int pocketMoney;

	printf("월급을 입력하세요: ");
	scanf("%d", &salary);

	printf("한 달에 며칠이나 출근하나요(일): ");
	scanf("%d", &workDay);

	printf("하루 교통비를 입력하세요: ");
	scanf("%d", &trafficExpenses);

	printf("하루 식비를 입력하세요: ");
	scanf("%d", &mealExpenses);

	printf("하루 용돈을 입력하세요: ");
	scanf("%d", &pocketMoney);

	int savingMoney = salary - (workDay * trafficExpenses) - (workDay * mealExpenses) - (workDay * pocketMoney);

	printf("저축액: %d\n", savingMoney);
	return 0;
}