//#include <stdio.h>  // printf 함수를 쓰기 위해 필요
//#include <stdlib.h> // rand, srand 함수를 쓰기 위해 필요
//#include <time.h>   // time 함수를 쓰기 위해 필요
//
//int main(void) {
//    // 1. 랜덤 숫자 생성기 초기화 (씨앗 심기)
//    srand(time(NULL));
//
//    // 2. 첫 번째 주사위(a) 굴리기 (1 ~ 6)
//    int a = (rand() % 6) + 1; // 0 ~ 5에 1을 더함
//
//    // 3. 두 번째 주사위(b) 굴리기 (1 ~ 6)
//    int b = (rand() % 6) + 1;
//
//    // 4. 두 주사위의 합 구하기
//    int sum = a + b;
//
//    // (선택 사항) 주사위 눈 확인
//    printf("첫 번째 주사위: %d\n", a);
//    printf("두 번째 주사위: %d\n", b);
//
//    // 5. 조건 확인: a와 b가 같은지(더블인지) 확인
//    if (a == b) {
//        // 같으면 "더블" 출력
//        printf("더블\n");
//    }
//    else {
//        // 다르면 합계(sum)를 형식에 맞춰 출력
//        printf("%d칸 이동했습니다.\n", sum);
//    }
//
//    return 0; // 프로그램 정상 종료
//}