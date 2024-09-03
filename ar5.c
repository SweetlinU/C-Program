#include <stdio.h>
int main() {
    int size = 5;
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;
    int i=0;
    while( i < size)
    {
	i++;
        sum += numbers[i];
    }
    printf("The sum of all integers in the array is: %d\n", sum);
    
    return 0;
}

