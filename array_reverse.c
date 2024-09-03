#include <stdio.h>

int main() {
    int arr[20];
    int size;
    int i=0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter %d numbers:\n", size);
    while( i < size) {
        scanf("%d", &arr[i]);
	i++;
    }
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("The reversed array is:\n");
    while(i < size) {
        printf("%d ", arr[i]);
	i++;
    }
    printf("\n");

    return 0;
}

