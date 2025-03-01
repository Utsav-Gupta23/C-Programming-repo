
      printf("Enter student ID: ");
      scanf("%d", &id);
  
      printf("Enter new GPA: ");
      scanf("%f", &new_gpa);
  
      gradesModifier(stu, no, id, new_gpa);
  
      // Print updated details
      printf("\n---- Updated Student Details ----\n");
      for (int i = 0; i < no; i++) {