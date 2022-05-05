#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,temp,i,j;
    scanf("%d,%d,%d",&num1,&num2,&num3);
    int a[3] = {num1,num2,num3};

    for (i=0;i<3;i++)
    {
        for (j=i+1;j<3;j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d,%d,%d",a[0],a[1],a[2]);
}
