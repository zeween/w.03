#include <stdio.h>

// Function to calculate the fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the fibonaci function and print the result
    printf("Fibonacci of %d is: %d\n", num, fibonacci(num));

    return 0;
}
