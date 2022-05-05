#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    scanf("%g %g",&a,&b);
    float c = sqrt(a*a+b*b);
    printf("c=%g",c);
}
