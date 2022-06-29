#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, temp, term=1, result;
    for (i=1;i<=10;i++)
    {
        temp = term*i;
        term = temp;
        result += temp;
    }
    printf("1!+2!+3!+...+10!=%d\n",result);
    return 0;
}

