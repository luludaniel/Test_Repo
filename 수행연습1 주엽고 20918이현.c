#include <stdio.h>

int main() {
    int dan = 5; 
    int i;

    for (i = 1; i <= 9; i++) // 구구단은 1부터 9까지 만들어야함 
	{
        printf("%d * %d = %d\n", dan, i, dan * i); // ;이 빠져있음 
	} 

    return 0;
}
