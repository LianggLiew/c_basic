#include <stdio.h>
#include <stdlib.h>


int main()
{
    int c;
    float mark;
    char grade;
    scanf("%f", &mark);

    if ((mark>=0) && (mark<60)) c = 1;
    else if ((mark>=60) && (mark<70)) c = 2;
    else if ((mark>=70) && (mark<80)) c = 3;
    else if ((mark>=80) && (mark<90)) c = 4;
    else c = 5;

    switch (c)
    {
        case 1: grade = 'E';break;
        case 2: grade = 'D';break;
        case 3: grade = 'C';break;
        case 4: grade = 'B';break;
        case 5: grade = 'A';break;
    }

    printf("%c\n",grade);
    return 0;
}
