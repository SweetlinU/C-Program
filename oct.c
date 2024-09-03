#include <stdio.h>

#define MAX_DIGITS 32  // Maximum number of octal digits we may need

void decimalToOctal(int decimal) {
    int octal[MAX_DIGITS];
    int index = 0;

    // Edge case for 0
    if (decimal == 0) {
        printf("The octal representation is: 0\n");
        return;
    }

    // Convert decimal to octal
    while (decimal > 0) {
        octal[index] = decimal % 8;  // Store the remainder
        decimal = decimal / 8;       // Update decimal number
        index++;                      // Move to next index
    }

    // Print the octal number in reverse order
    printf("The octal representation is: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Read decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Function to convert and print octal representation
    decimalToOctal(decimal);

    return 0;
}

