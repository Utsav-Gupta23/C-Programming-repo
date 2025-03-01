#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverseString(char arr[]);

int main() {
  char text[50];

  printf("Enter your text: ");
  fgets(text, sizeof(text), stdin);

  puts("Original string is: ");
  puts(text);

  reverseString(text);

  puts("Reversed string is: ");
  puts(text);

  return 0;
}

void reverseString(char arr[]) {
  int len = strlen(arr);
  
  for(int i = 0; i < len/2; i++) {
    char temp;
    temp = arr[i];
    arr[i] = arr[len - i - 1];
    arr[len - 1 - i] = temp;
  }
}