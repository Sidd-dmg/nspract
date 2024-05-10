#include <stdio.h>

int main() {
    char str[100];
    printf("\nEnter a string: ");
    gets(str);

    printf("\nChoose an option:\n1 = Encrypt\n2 = Decrypt\n");
    int x;
    scanf("%d", &x);

    for (int i = 0; str[i] != '\0'; i++) {
        if (x == 1) {
            str[i] += 3;  // Encryption: Add 3 to ASCII value
        } else if (x == 2) {
            str[i] -= 3;  // Decryption: Subtract 3 from ASCII value
        } else {
            printf("\nError\n");
            return 0;
        }
    }

    printf(x == 1 ? "\nEncrypted string: %s\n" : "\nDecrypted string: %s\n", str);

    return 0;
}
