#include<stdio.h>
int main()
{
	int a[4]={23,56,78,45};
	int *ptr=NULL;
	ptr=a;
	while(ptr<=&a[3])
	{
		printf("%d \n",*ptr);
		ptr++;
	}

	return 0;
}
