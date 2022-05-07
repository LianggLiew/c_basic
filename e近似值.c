#include <stdio.h>
#include <stdlib.h>


int main()
{
    double eps;
    double result = 0, fenzi = 1;
    int i = 1;
    scanf("%lf",&eps);
    while(fenzi>=eps)
    {
        result += fenzi;
        fenzi /= i;
        i++;
    }
    printf("%.8f",result);
    return 0;
}

