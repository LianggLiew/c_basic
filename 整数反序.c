#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    int n1 = reverse(num);
    int result = n1 * 2;
    printf("%d\n",result);
    return 0;
}

int reverse(int num)
{
    int ReversedNum = 0;
    int last;
    while (num>0)
    {
        last = num % 10;
        num = num / 10;
        ReversedNum = ReversedNum*10 + last;
    }
    return ReversedNum;
}
