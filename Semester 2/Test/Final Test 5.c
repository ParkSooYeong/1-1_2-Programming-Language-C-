/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 2 , Final Test 5 */

#include <stdio.h>

int main(void)
{
    FILE* fp;
    int i;

    fp = fopen("TEST.TXT", "w");

    for (i = 0; i < 3; i++)
    {
        fprintf(fp, "%5d\n", i);
    }

    fputc('e', fp);
    fputc('n', fp);
    fputc('d', fp);
    fputc('\n', fp);
    fputs("of data\n", fp);
    fclose(fp);

    return 0;
}
