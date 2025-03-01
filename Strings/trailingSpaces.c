#include <stdio.h>
#include <string.h>

void trimSpaces(char arr[]);

int main() {
    char input[50];
    
    printf("Enter your text: ");
    fgets(input, sizeof(input), stdin);

    trimSpaces(input);  // Calling the function to trim spaces

    printf("Final trimmed string is: \"%s\"\n", input);

    return 0;
}

// Function to trim spaces from both ends of the string
void trimSpaces(char arr[]) {
    int start = 0, end = strlen(arr) - 1;

    // Remove leading spaces
    while (arr[start] == ' ') {
        start++;
    }

    // Remove trailing spaces & newline
    while (end > start && (arr[end] == ' ' || arr[end] == '\n')) {
        end--;
    }

    // Shift characters to the start of the array
    int i;
    for (i = 0; i <= end - start; i++) {
        arr[i] = arr[start + i];
    }
    arr[i] = '\0'; // Null-terminate the string
}

