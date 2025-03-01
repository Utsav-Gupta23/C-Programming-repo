#include <stdio.h>
#include <string.h>

int main() {
  const char PASSWORD_REAL[] = "itsutsav2403";
  char password[20];

  do {
    printf("Enter the password: ");
    scanf("%s", password);  // No & needed

    if (strcmp(password, PASSWORD_REAL) != 0) {  // Compare strings properly
      printf("Wrong Password! Retry\n");
    }

  } while (strcmp(password, PASSWORD_REAL) != 0);

  printf("Access Granted!\n");

  return 0;
}
