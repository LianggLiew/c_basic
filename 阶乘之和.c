#include <stdio.h>
#include <stdlib.h>
int count=0;

int main()
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int k=1;
        for(j=1;j<=i;j++)
        {
            k = k*j;
        }
        sum += k;
    }
    printf("%d\n", sum);
    return 0;
}

