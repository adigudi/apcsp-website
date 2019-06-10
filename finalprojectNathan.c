#include <stdio.h>
//#include "finalprojectNathan.h"
 
void averageGrade(struct Student* student)
{
    int n, i;
    float num[100], sum = 0.0, average;

    printf("Enter the numbers of grades: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0)
    {
        printf("Error! grade should in range of (1 to 100).\n");
        printf("Enter the grade again: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d. Enter grade: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / n;
    if((average >= 90 && average <= 100) || average > 100)
    {
	fprintf(outFile,"Grade: A\n");
    }
    if(average >= 80 && average < 90)
    {
        fprintf(outFile,"Grade: B\n");
    }
    if(average >= 70 && average < 80)
    {
        fprintf(outFile,"Grade: C\n");
    }
    if(average >= 60 && average < 70)
    {
        fprintf(outFile,"Grade: D\n");
    }
    if(average < 60){
	fprintf(outFile,"Grade: F\n");
    }
    fprintf(outFile,"Average = %.2f\n", average);
}
