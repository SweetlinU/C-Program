#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,8,9,10,11,12};
    int i=0,sum=0;
    int add=(11+12)/2;
    while(i<=10)
    {
	    sum=sum=arr[i];
	    i++;
    }
    int missing=add-sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}
