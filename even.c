#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int *ptr=NULL;
	ptr=arr;
	while(ptr<=&arr[5])
	{
		if(*ptr%2==0)
			printf("Even number:%d\n",*ptr);
		else
			printf("Odd number:%d\n",*ptr);
		ptr++;
	}

	return 0;
}
