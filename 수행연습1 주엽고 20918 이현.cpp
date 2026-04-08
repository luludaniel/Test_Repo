#include <stdio.h>

int main() {
    int dan = 5; 
    int i;

    for (i = 0; i < 9; i++) {
        printf("%d * %d = %d\n", dan, i, dan * i)
    ;}// ;이 빠져있음 

    return 0;
}
