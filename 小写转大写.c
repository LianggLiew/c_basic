#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a1,a2,a3,a4,b1,b2,b3,b4;
    scanf("%c%c%c%c",&a1,&a2,&a3,&a4);
    b1 = a1-32;
    b2 = a2-32;
    b3 = a3-32;
    b4 = a4-32;
    printf("%c%c%c%c",b1,b2,b3,b4);
}



