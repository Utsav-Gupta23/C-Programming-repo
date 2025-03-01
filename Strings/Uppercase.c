#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char text[100];
    
    printf("Enter your text: ");
    fgets(text, sizeof(text), stdin);

    // for (int i = 0; text[i] != '\0'; i++) {
    //     text[i] = toupper(text[i]);  // Corrected function call
    // }

    for (int i = 0; i < strlen(text); i++) {
        text[i] = toupper(text[i]);  // Corrected function call
    }

    printf("Here is your final output: %s", text);
    
    return 0;
}
