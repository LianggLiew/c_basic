#include <stdio.h>
#include <stdlib.h>

double depo_method(double x)
{
    int i;
    for (i=1;i<=20;i++)
    {
        x = x * 1.000875;
    }
    return x;
}


int main()
{
    double amount;
    scanf("%lf", &amount);

    double fivem = amount + (amount*0.03)*5;

    double y1 = amount + (amount*0.021)*2;
    double twothreem = y1 + (y1*0.0275)*3;

    double y2 = amount + (amount*0.0275)*3;
    double threetwom = y2 + (y2*0.021)*2;

    double onem = (((((amount*1.015)*1.015)*1.015)*1.015)*1.015);

    printf("%f %f %f %f %f",fivem,twothreem,threetwom,onem,depo_method(amount));
    return 0;
}



