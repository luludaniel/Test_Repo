#include <stdio.h>

int main() {
    
    
    int i;
    int sum = 0; 
    for (i = 1; i <= 10; i++) { // 10 포함해야함 
        sum = sum + i;
    }

    printf("1부터 10까지의 합: %d\n", sum);
    if (sum % 2 == 0) { 
        printf("결과는 짝수입니다.\n"); // "로 묶어야 함 
    } else {
        printf("결과는 홀수입니다.\n"); // 세미콜론 빠짐 
    }

    return 0;
}
