#include <stdio.h>
#include <string.h>

int main() {

    printf("Welcome to File copying Tool\n");
    FILE *original_file = fopen("utsav.txt", "r");
    FILE *copied_file = fopen("copy.txt", "w");

    if ((original_file == NULL) || (copied_file==NULL)) {
      printf("\nFile was not found.\n"); 
      return 1; // Exit the program if file is missing
    } 
    while (1) {
      char c = fgetc(original_file);
      if(c == EOF) break;
      fputc(c, copied_file);
      printf(".");
    }
    printf("\nFile Copied Succesfully");

    fclose(original_file);
    fclose(copied_file);
    return 0;
}