#include <stdio.h>

int main() {
    int dan = 5; 
    int i;

    for (i = 0; i < 9; i++) { // 반복문 시작할 떄 1이어야 함
        printf("%d * %d = %d\n", dan, i, dan * i) //세미콜론이 빠짐(컴파일러오류생김)
    }

    return 0;
}
