#include <stdio.h>
#include <string.h>

// Function to simulate a login
int login() {
    char username[20];
    char password[20];

    // Ask the user to enter username and password
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    // Check if the username and password are correct
    if (strcmp(username, "admin") == 0 && strcmp(password, "password123") == 0) {
        printf("Login successful!\n");
        return 1;
    } else {
        printf("Invalid username or password.\n");
        return 0;
    }
}

int main() {
    // Call the login function
    if (login()) {
        printf("Welcome to the system!\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
