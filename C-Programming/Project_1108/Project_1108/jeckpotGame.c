//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	srand(time(NULL));
//	int count = 0;
//
//	while (1)
//	{
//		count += 1;
//		printf("*%d회 게임*\n", count);
//		// rand() % 개수
//		int a = (rand() % 7) + 1;
//		int b = (rand() % 7) + 1;
//		int c = (rand() % 7) + 1;
//		printf("a: %d\n", a);
//		printf("b: %d\n", b);
//		printf("c: %d\n", c);
//
//		if (a == 7 && b == 7 && c == 7)
//		{
//			printf("잭팟 성공!\n");
//			printf("시도 횟수: %d\n", count);
//			break;
//		}
//		else {
//			printf("다음 기회에..\n");
//		} // end if
//	}
//	
//	return 0;
//}