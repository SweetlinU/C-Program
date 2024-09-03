#include<stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int i,j,temp;
    printf("Original array: ",arr);
    while(i<=5)
    {
	    printf("%d ", arr[i]);
	    int j=4;
	    while(i<j)
	    {
		    i++;
		    j--;
		    temp=arr[i];
		    arr[i]=arr[j];
		    arr[j]=temp;
		    printf("\nReversed array: ");
	    }
	    int i=0;
	    while(i<5)
	    {
		    i++;
		    printf("%d ", arr[i]);
	    }
	    return 0;
    }
}
