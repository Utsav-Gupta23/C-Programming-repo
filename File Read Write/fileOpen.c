#include <stdio.h>
#include<string.h>
int main() {
  char file_name[100];

  printf("Welcome to File Opening Tool\n");
  printf("Please Enter the File Name: ");
  
  fgets(file_name, sizeof(file_name), stdin);
  file_name[strcspn(file_name, "\n")] = '\0';

  FILE *file = fopen(file_name, "r");

  if (file != NULL) {
    printf("\n%s was opened successfully.\n", file_name);
    fclose(file); // Close the file after opening
  } else {
    printf("\nFile was not found.\n");
  }

  return 0;
}
