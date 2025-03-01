#include<stdio.h>
#include<string.h>
#include<ctype.h>

int palindrome(char arr[]);

int main() {
  char string[50];

  printf("Enter your String: ");
  fgets(string, sizeof(string), stdin);
  for (int i = 0; i < strlen(string); i++) {
    string[i] = tolower(string[i]);
  }

  printf("After lowering the case: %s ",string);
  // Remove trailing newline if present
  string[strcspn(string, "\n")] = '\0';

  int result = palindrome(string);
  if(result == 1){
    printf("Palindrome\n");
  }
  else{
    printf("Not palindrome\n");
  }  
  return 0;
}

int palindrome(char arr[]) {
  int end = strlen(arr) - 1;
  for (int i = 0; i < end/2; i++) {
    if(arr[i] != arr[end - i]) {  // No need to subtract 1 again
      return -1;
    }
  }
  return 1;
}
