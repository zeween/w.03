#include <stdio.h>

// Function to get the maximum of two numbers
int Get_Max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    // Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the Get_Max function and print the result
    int max = Get_Max(num1, num2);
    printf("The maximum number is: %d\n", max);

    return 0;
}
