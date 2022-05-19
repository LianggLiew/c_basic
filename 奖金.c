#include <stdio.h>
#include <stdlib.h>


int main()
{
    int c;
    double amount, result;
    scanf("%lf", &amount);

    if (amount<=100000) c = 1;
    else if ((amount>100000) && (amount<=200000)) c = 2;
    else if ((amount>200000) && (amount<=400000)) c = 3;
    else if ((amount>400000) && (amount<=600000)) c = 4;
    else if ((amount>600000) && (amount<=1000000)) c = 5;
    else c = 6;

    switch (c)
    {
        case 1: result = amount*0.1;break;
        case 2: result = (amount-100000)*0.075 +10000;break;
        case 3: result = (amount-200000)*0.05  +17500;break;
        case 4: result = (amount-400000)*0.03  +27500;break;
        case 5: result = (amount-600000)*0.015 +33500;break;
        case 6: result = (amount-1000000)*0.01 +39500;break;
    }

    printf("%.2f\n",result);
    return 0;
}
