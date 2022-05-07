#include <stdio.h>
#include <stdlib.h>

int num_check(int x)
{
    int i,count=0,result=x;
    while (1)
    {
        if(result==0)
        {
            break;
        }
        else
        {
            count++;
        }
        result /= 10;
    }
    return count;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n", num_check(num));
    return 0;
}
