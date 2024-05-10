#include <stdio.h>

char dc[] = "XDGSZANYOBTMJCEVFHKWPLQURI";
char ec[] = "abcdefghijklmnopqrstuvwxyz";

void encrypt(char *);
void decrypt(char *);

int main() {
    char text[100];
    printf("\nEnter plain text: ");
    scanf("%s", text);

    printf("\nAfter Encryption:\n----------------\n");
    encrypt(text);
    printf("%s\n", text);

    printf("\nAfter Decryption:\n----------------\n");
    decrypt(text);
    printf("%s\n", text);

    return 0;
}

void encrypt(char *p) {
    while (*p != '\0') {
        *p = dc[*p - 'a'];
        p++;
    }
}

void decrypt(char *p) {
    while (*p != '\0') {
        int i = 0;
        while (dc[i] != *p) {
            i++;
        }
        *p = ec[i];
        p++;
    }
}
