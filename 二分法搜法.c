#include <stdio.h>
#include <stdlib.h>
int count=0;

int main()
{
    int arr[100],k; scanf("%d",&k);
    for(int i=0;i<100;i++)
    {
        arr[i] = i+1;
    }
    int sz=sizeof(arr)/sizeof(arr[0]);
    int left=0, right=sz-1;

    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid] > k)
        {
            right = mid-1;
        }
        else if(arr[mid] < k)
        {
            left = mid+1;
        }
        else
        {
            printf("Found it, its located at %dth place.",mid);
            break;
        }
    }
    if(left>right)
    {
        printf("Can't find it");
    }
    return 0;
}

