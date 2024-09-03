#include<stdio.h>
int main()
{
        int num[6]={1,2,3,4,5,6};
	int i=0;
        while(i<5)
        {
                if(num[i]%2==0)
                        printf("Even number:%d\n",num[i]);
                else
                        printf("Odd number:%d\n",num[i]);
		i++;
        }

        return 0;
}

