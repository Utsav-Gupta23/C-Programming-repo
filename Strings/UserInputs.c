#include <stdio.h>
#include<string.h>

int main() {
  const char EXIT[] = "exit";
  char command[20];
  printf("Welcome to our system\n\n");
  while(1) {
    printf("Enter your command: ");
    scanf("%s", command);
    if(!strcmp(command, EXIT)) {
      break;
    }
  };

  printf("\n\nExited succesfully");
  return 0;
}