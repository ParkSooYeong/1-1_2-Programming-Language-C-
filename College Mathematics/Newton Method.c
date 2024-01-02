/* SKU CoE ITE - ParkSooYoung */
/* Grade 1 , Semester 1 , College Mathematics */

#include <stdio.h>
#include <math.h>

double graph(double x);
double diff_graph(double x);
double newton(double a);

double graph(double x)
{
    double y;

    y = (x * x) - 2;

    return y;
}

double diff_graph(double x)
{
    double y;

    y = 2 * x;

    return y;
}

double newton(double a)
{
    double l0;
    double l;
    double x0;
    double x;
    double y0;
    double y;

    x0 = a;
    
    int co = 1;

    while(1)
    {
        y0 = graph(x0);
        l0 = diff_graph(x0);

        x = x0 - (y0 / l0);

        printf("%d %lf \n", co, x);

        if(fabs(graph(x0) - graph(x)) < 0.000001)
        {
            break;
        }

        y = fabs(x0 - x);

        if(y < 0.000001)
        {
            break;
        }

        x0 = x;
        co++;
    }

    printf("The value is %lf \n", x);

    return 0;
}

int main(int argc, const char * argv[])
{
    double a;
    
    printf("Input the number : ");
    scanf("%lf", &a);

    while(a == 0)
    {
        printf("One more : ");
        scanf("%lf", &a);
    }

    newton(a);
    
    return 0;
}
