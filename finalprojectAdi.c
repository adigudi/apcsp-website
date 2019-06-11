#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "finalprojectNathan.h"
#define TRUE 0
#define FALSE 1

void printStudent(struct Student* student)
{
 fprintf(outFile,"\nFirst Name: %s\n", student->firstname);
 fprintf(outFile,"Last Name: %s\n", student->lastname);
 fprintf(outFile,"Student ID: %d\n", student->sid);
 fprintf(outFile,"Total Value of Assignment: %f\n", student->totalscore); 
 fprintf(outFile,"Student Score: %f\n", student->scoreearned);
 fprintf(outFile,"Grade Percent: %f\n", student->gradePercent);
}


int main(int arc, char* argv[])
{
 // int arr[] = {5, 8, 3, 7, 0};
  char input[256];
  char ans;
  struct Student students[256];
  int b = TRUE;
  int count = 0;
  outFile = fopen("testfile.out", "w");
  if (outFile == NULL) {
    printf("error - failed to open file for writing\n");
    return 1; 
}
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
      int sID;
      float gradePercent;
      float totalscore;
      float scoreearned;
      printf("Enter First Name of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%s", firstname);
      printf("Enter Last Name of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%s", lastname);
      printf("Enter Student ID of Student: ");
      fgets(input, 100, stdin);
      sscanf(input, "%d", &sID);
      printf("Enter Total Value of Assignment:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%f", &totalscore);
      printf("Enter Score Earned by Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%f", &scoreearned);
      printf("\n");
      strcpy(students[count].firstname, firstname);
      strcpy(students[count].lastname, lastname);
      students[count].sid = sID;
      students[count].totalscore = totalscore;
      students[count].scoreearned = scoreearned;
      gradePercent = (scoreearned / totalscore * 100.0);
      students[count].gradePercent = gradePercent;
      count++;
    }
    else
    {
      b = FALSE;
      for (int i = 0; i < count; i++)
      {
	//printf("\nFirst Name: %s\n", (*students).firstname);
	//printf("Last Name: %s\n", (*students).lastname);
	//printf("Student ID: %d\n", (*students).sid);
	//printf("Total Value of Assignment: %f\n", (*students).totalscore);
	//printf("Student Score: %f\n", (*students).scoreearned);
	//printf("Grade Percent: %f\n", (*students).gradePercent);
	printStudent(&students[i]);
    }
	averageGrade(students);
        fclose(outFile);
    }
  }
  return 0;
}
