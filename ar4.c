#include<stdio.h>
int main()
{
	int n,i=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the element:");
	int num[100];
	while(n>0)
	{
		num[i]=n%8;
		n=n/8;
		i++;
	}
	int i=i-1;
	while(i>=0)
	{
		printf("%d",num[i]);
		i--;
	}
	return 0;
}
