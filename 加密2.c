#include <stdio.h>
#include <stdlib.h>

char encryption(char c, int n)
{
    int dc = (int)c;
    dc = dc + n;
    if (dc>122)
    {
        int temp = dc % 122;
        dc = temp + 96;
    }
    char result = dc;
    return result;
}


int main()
{
    char c1,c2,c3,c4;
    int num;
    scanf("%c%c%c%c %d",&c1,&c2,&c3,&c4,&num);
    printf("%c%c%c%c",encryption(c1,num),encryption(c2,num),encryption(c3,num),encryption(c4,num));
    return 0;
}

// a = 97 , z =122
