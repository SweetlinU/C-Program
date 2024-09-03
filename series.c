#include<stdio.h>
int main(int args,char*argv[])
{
	int n1=1,n2=20;
	while(n1<n2)
	{
		printf("%d %d",n1*2,n1*4);
		n1=n1++;
	}
}

