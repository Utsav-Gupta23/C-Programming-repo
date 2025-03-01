#include<stdio.h>
#include<string.h>

int main() {
  printf("Welcome to world of Reading & Writting\n");
  FILE *file = fopen("data.txt", "r+");
  if(!file) {
    printf("Error Opening File");
    return 1;
  }

  char buffer[100];
  fgets(buffer, 100, file);
  printf("Reading from file I found %s", buffer);

  fseek(file, 0, SEEK_END);
  fputs("This message was written by program\n",file);

  fclose(file);
  return 0;
}