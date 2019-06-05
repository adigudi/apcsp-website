#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 0
#define FALSE 1

struct Student
{
  char firstname[256];
  char lastname[256];
  int sid;
  int gradePercent;
  char gradeLetter[256];
};

void printStudent(struct Student* student)
{
  printf("\nFirst Name: %s\n", student->firstname);
  printf("Last Name: %s\n", student->lastname);
  printf("Student ID: %d\n", student->sid);
  printf("Grade Percent: %d\n", student->gradePercent);
}

int main()
{
  char input[256];
  char ans;
  struct Student students[256];
  int b = TRUE;
  int count = 0;
  while (b == 0)
  {
    printf("Create New Student (Yes/No)?  ");
    fgets(input, 100, stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "Yes") == 0)
    {
      b = TRUE;
      char firstname[100];
      char lastname[100];
      int age;
      int sID;
      int gradePercent;
      printf("Enter First Name of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%s", firstname);
      printf("Enter Last Name of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%s", lastname);
      printf("Enter Student ID of Student: ");
      fgets(input, 100, stdin);
      sscanf(input, "%d", &sID);
      printf("Enter Grade Percent of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%d", &gradePercent);
      printf("\n");
      strcpy(students[count].firstname, firstname);
      strcpy(students[count].lastname, lastname);
      students[count].sid = sID;
      students[count].gradePercent = gradePercent;
      count++;
    }
    else
    {
      b = FALSE;
      for (int i = 0; i < count; i++)
      {
        printStudent(&students[i]);
      }
    }
  }
  return 0;
}
