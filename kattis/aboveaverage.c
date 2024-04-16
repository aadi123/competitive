#include <stdio.h>

int main(int argc, char** argv) {
  int test_cases;
  scanf("%d\n", &test_cases);
  for (int i = 0; i < test_cases; i++) {
    int num_students;
    scanf("%d", &num_students);
    int sum = 0;
    int students[num_students];
    for (int stud = 0; stud < num_students; stud++) {
      int grade;
      scanf("%d", &grade);
      sum += grade;
      students[stud] = grade;
    }
    float average = sum / (float) num_students;
    int aboveAverage = 0;
    float percentAboveAverage = 0.0f;
    for (int stud = 0; stud < num_students; stud++) {
      if (students[stud] > average) {
        aboveAverage++;
      }
    }
    percentAboveAverage = (float) aboveAverage * 100 / num_students;
    printf("%.3f%%\n", percentAboveAverage);
  }
}
