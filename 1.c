#include <stdio.h>
#include <string.h>

int main() {
    char username[15];
    char password[12];
    printf("Enter your username:\n");
    scanf("%s", username);
    printf("Enter your password:\n");
    scanf("%s", password);
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0) {
        printf("\nWelcome. Login Success!");
    } else {
        printf("\nUser or password is incorrect.");
    }
    return 0;
}
