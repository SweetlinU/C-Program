#include<stdio.h>
int main()
{
	char p;
	char buf[10]={1,2,3,4,5,6,7,8,9};
	p=(buf+1)[5];
	printf("%d",p);
	return 0;
}
