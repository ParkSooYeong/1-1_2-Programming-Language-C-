/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Final Test 8 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    int number;
    char title[10];
};

int main(void)
{
    struct Book* p;

    p = (struct Book*)malloc(2 * sizeof(struct Book)); // 동적 메모리 할당

    if (p == NULL)
    {
        printf("메모리 할당 오류\n");
        exit(1);
    }

    p->number = 1;
    strcpy(p->title, "C Programming");

    (p + 1)->number = 2;
    strcpy((p + 1)->title, "Data Structure");

    free(p); // 동적 메모리 반납

    return 0;
}
