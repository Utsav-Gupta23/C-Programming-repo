#include <stdio.h>
#include <string.h>

int main() {
    const char STORED_PASSWORD[] = "UtsavGupta2020";
    char password[50];  

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);

    password[strcspn(password, "\n")] = '\0';

    // Corrected strcmp() usage
    if (strcmp(password, STORED_PASSWORD) == 0) {
        puts("Access granted!");
    } else {
        puts("Access denied!");
    }

    return 0;
}
