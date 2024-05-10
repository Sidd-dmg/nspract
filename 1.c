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



//Second Code



#include <stdio.h>
#include <conio.h>

int main() {
    char password[9], username[10], ch;
    int i;

    printf("Enter User name: ");
    gets(username);

    printf("Enter the password <any 8 characters>: ");
    for (i = 0; i < 8; i++) {
        ch = getch();
        password[i] = ch;
        ch = '*';
        printf("%c", ch);
    }
    password[i] = '*';
    getch();

    printf("\nYour password is :");
    for (i = 0; i < 8; i++) {
        printf("%c", password[i]);
        getch();
    }

    return 0;
}
