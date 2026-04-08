#include <stdio.h>

int main() {
    
    
    int i;
    int sum = 0; 
    for (i = 1; i <= 10; i++) {//1에서 10까지의 합을 구해야함
        sum = sum + i;
    }

    printf("1부터 10까지의 합: %d\n", sum);
    if (sum % 2 == 0) { 
        printf("결과는 짝수입니다.\n");//따옴표
    } else {
        printf("결과는 홀수입니다.\n");//세미콜론 추가 (컴파일럿)
    }

    return 0;
}