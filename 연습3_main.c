#include <stdio.h>
#include "book.h"

int main() {
    Book myBook = {101, "C Programming Master", 1};

    printf("=== 도서 관리 시스템 ===\n");
    printBookInfo(myBook);

    // [학생들이 수정해야 할 핵심 포인트]
    // 오류 상태: rentBook(myBook); 만 하면 원본은 변하지 않음
    // 올바른 방법: myBook = rentBook(myBook); 처럼 반환값을 받아야 함
    
    printf("\n대여를 시도합니다...\n");
    myBook = rentBook(myBook); // 반환값을 대입하여 업데이트!

    printf("\n대여 시도 후 정보:\n");
    printBookInfo(myBook);

    return 0;
}
