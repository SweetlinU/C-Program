#include<stdio.h>
int main(int args, char*argv[])
{
	int n1,n2;
	printf("Enter the value of n1,n2");
	scanf("%d %d",&n1,&n2);
	if(n1%5==0)
	{
		while(n1<=n2)
		{
			printf("%d",n1);
			n1=n1+5;
		}
	}

	else
	{
		while(n1<=n2)
                {
			n1=n1++;
		       	printf("%d",n1);
                        n1=n1+1;
                }
		return 0;
	}
	
}

