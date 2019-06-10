#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//defining fuctions
float areaOfCircle(float radius)
{
  float area = M_PI * radius * radius;
  return area;
}

void areaLoop(int arg, int argc, char* argv[])
{
  while (arg < argc)
  {
    float f = areaOfCircle(atof(argv[arg]));
    printf("Area of circle with radius %s = %f\n", argv[arg], f);
    arg++;
  }
}

//start of code
int main(int argc, char* argv[])
{
  if (argc > 1)
  {
    int arg = 1;
    areaLoop(arg, argc, argv);
  }
  else
  {
    char input[256];
    int arg = 0;
    char arg1[50], arg2[50];
    printf("Enter two radii to find the area of the two circles\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s" "%s", &arg1, &arg2);
    char* string[50];
    string[0] = arg1;
    string[1] = arg2;
    areaLoop(arg, 2, string);
  }
  return 0;
}
