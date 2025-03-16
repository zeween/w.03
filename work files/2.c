#include <stdio.h>

// Declare global variables
int x = 10, y = 20;

// Function to swap two global variables
void swap() {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap();

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
