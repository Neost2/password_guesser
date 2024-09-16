#include <stdio.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 20

int main(void) {
    char userPassword[MAX_PASSWORD_LENGTH];
    char* storedPassword = "password123";
    char* alternatePassword = "alternate123";
    char* message;

    // Input: Prompt the user to enter a password
    printf("Enter the password: ");
    scanf("%s", userPassword);

    // Processing: Check if the entered password matches either the stored password or the alternate password
    int isValid = (strcmp(userPassword, storedPassword) == 0 || strcmp(userPassword, alternatePassword) == 0) ? 1 : 0;

    // Output: Display a message based on the password validity
    message = isValid ? "Access granted. Starting OS..." : "Invalid password. Exiting...";
    printf("%s\n", message);

    // Output: Simulate OS startup sequence if access is granted
    if (isValid) {
        printf("OS startup sequence initiated.\n");
        printf("Loading system components...\n");
        printf("System ready.\n");
    }

    return 0;
}