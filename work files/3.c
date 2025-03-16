#include <stdio.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;

    // Handle the case where the number is 0
    if (num == 0) {
        return 1;
    }

    // Count the digits
    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the countDigits function and print the result
    int digits = countDigits(number);
    printf("The number of digits is: %d\n", digits);

    return 0;
}
