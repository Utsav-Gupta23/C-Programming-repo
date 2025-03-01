#include <stdio.h>
#include <string.h>

int main() {

    printf("Welcome to Writing User input to file Tool\n");
    FILE *file = fopen("user_input.txt", "a");

    if (!file) {
      printf("\nFile was not found.\n"); 
      return 1; // Exit the program if file is missing
    } 

    char input[100];
    while(1){
      printf("Enter your file text: ");
      fgets(input, 100, stdin);
      if (strcmp(input, "exit\n") == 0) break; 
        fputs(input, file);
      }
    return 0;
}