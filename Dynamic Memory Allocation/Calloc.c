#include<stdio.h>
#include<stdlib.h>

int main() {
  printf("Memory allocation using Calloc\n");

  char *sentence = (char *) calloc(100, sizeof(char));

  if(sentence == NULL) {
    printf("Memory allocation Failed\n");
    return 1;
  }

  printf("Checking initialization values:\n");
  for(int i = 0; i < 100; i++) {
    printf("%d",sentence[i]);
  }

  printf("\nNow enter the actual text: ");
  fgets(sentence, 100, stdin);

  printf("\nYour text is: %s", sentence);
  
  free(sentence);
  sentence = NULL;

  return 0;
}