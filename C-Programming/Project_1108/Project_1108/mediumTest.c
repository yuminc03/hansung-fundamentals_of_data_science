#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;

	printf("%d\n", x < y);
	printf("%d\n", x == y);
	printf("%d\n", x = y);
	printf("%d\n", x != y);
	printf("%d\n", x++);

	return 0;
}