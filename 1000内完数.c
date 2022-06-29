#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j,k=1,sum;
    for(i=2;i<1000;i++)
    {
        sum=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                sum += j;
            }
        }
        if(sum==i && k==1)
        {
            printf("%d",i);
            k=0;
        }
        else if(sum == i)
        {
            printf(",%d",i);
        }
    }
    return 0;
}


