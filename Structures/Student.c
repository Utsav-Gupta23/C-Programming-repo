#include <stdio.h>
#include <string.h>

struct Student {
  int id;
  char name[50];
  int year;
  float gpa;
};

typedef struct Student Student;

void inputDetails(Student *student);
void printDetails(Student *student);
void gradesModifier(Student stu[], int no, int id, float new_gpa);

int main() {
  int no;
  char check;
  int id;
  float new_gpa;

  printf("Enter number of Student Details you want to enter: ");
  scanf("%d", &no);
  getchar(); // Consume newline character left by scanf

  Student stu[no];

  for (int i = 0; i < no; i++) {
    printf("\nEnter Student %d details:\n", i + 1);
    inputDetails(&stu[i]);
  }

  printf("\n---- Student Details ----\n");
  for (int i = 0; i < no; i++) {
    printDetails(&stu[i]);
  }

  do {
    printf("\nDo you want to modify the grade of a student? [y/n]: ");
    scanf(" %c", &check);

    if (check == 'y') {
      printf("Enter student ID: ");
      scanf("%d", &id);
  
      printf("Enter new GPA: ");
      scanf("%f", &new_gpa);
  
      gradesModifier(stu, no, id, new_gpa);
  
      // Print updated details
      printf("\n---- Updated Student Details ----\n");
      for (int i = 0; i < no; i++) {
        printDetails(&stu[i]);
      }
    }
  } while (check == 'y');  // Keep modifying as long as the user wants

  return 0;
}

void inputDetails(Student *student) {
  printf("Enter Student ID: ");
  scanf("%d", &student->id);
  getchar(); // Consume newline left by scanf

  printf("Enter Student Name: ");
  fgets(student->name, sizeof(student->name), stdin);
  student->name[strcspn(student->name, "\n")] = '\0'; // Remove newline

  printf("Enter Year: ");
  scanf("%d", &student->year);

  printf("Enter GPA: ");
  scanf("%f", &student->gpa);

  while (getchar() != '\n'); // Clear input buffer
}

void printDetails(Student *student) {
  printf("%s (ID: %d, Year: %d, GPA: %.2f)\n", student->name, student->id, student->year, student->gpa);
}

void gradesModifier(Student stu[], int no, int id, float new_gpa) {
  for (int i = 0; i < no; i++) {
    if (stu[i].id == id) {
      stu[i].gpa = new_gpa;
      printf("\nGPA updated successfully for %s (ID: %d)\n", stu[i].name, id);
      return;
    }
  }
  printf("\nStudent with ID %d not found!\n", id);
}
