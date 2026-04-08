#include <stdio.h>

int main() {
    int dan = 5; 
    int i;

    for (i = 1; i <= 9; i++) { //i를 1부터 시작 9까지 반복 
        printf("%d * %d = %d\n", dan, i, dan * i); //세미콜론 빠짐 
    }

    return 0;
}
