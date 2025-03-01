#include <stdio.h>
#include <string.h>

int main() {
    char file_name[100];

    printf("Welcome to File Opening Tool\n");
    printf("Please Enter the File Name: ");
  
    fgets(file_name, sizeof(file_name), stdin);
    file_name[strcspn(file_name, "\n")] = '\0';

    FILE *file = fopen(file_name, "r");

    if (file == NULL) {
        printf("\nFile was not found.\n"); 
        return 1; // Exit the program if file is missing
    } 

    int temp;
    int sum = 0;
    int read_status;

  while (fscanf(file, "%d", &temp)==1) {
    sum += temp;
  }
    printf("\nThe sum of all numbers: %d\n", sum);

    fclose(file);
    return 0;
}
