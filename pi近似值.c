#include <stdio.h>
#include <stdlib.h>


int main()
{
    double pi=0.0, term=1.0, i=1.0;
    double eps;
    int sign=1;
    scanf("%lf", &eps);
    while(fabs(term)>=eps)
    {
        pi += term;
        i += 2;
        sign = -sign;
        term = sign/i;
    }
    pi *= 4;
    printf("%.8f\n", pi);
    return 0;
}

