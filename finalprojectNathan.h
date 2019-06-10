//declaring functions
struct Student
{
  char firstname[256];
  char lastname[256];
  int sid;
  float gradePercent;
  float totalscore;
  float scoreearned;
  char gradeLetter[256];
};
void averageGrade(struct Student* student);
