#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.14;
    float r;
    scanf("%g",&r);
    float cl = 2*pi*r, area= pi*r*r;
    printf("%g %g",cl,area);
}
