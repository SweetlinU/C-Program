#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int numbers[size];
    int i=0;
    printf("Enter %d numbers:\n", size);
    while(i<size)
    {
        scanf("%d", &numbers[i]);
	i++;
    }
    int sum = 0;
    int i=0;
    while( i < size)
    {
        sum += numbers[i];
	i++;

    }
    printf("The sum of all numbers in the array is: %d\n", sum);

    return 0;
}

