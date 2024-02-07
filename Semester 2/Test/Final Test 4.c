/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Final Test 4 */

#include <stdio.h>

struct test
{
    int a;
    float b;
} record;

int main(void)
{
    FILE fp = fopen("TEST.DAT", "rb"); // *fp
    fread(record, sizeof(record), 1, fp); // &record
    fclose(fp);
    return 0;
}
