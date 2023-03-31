#include <algorithm> //for transform() to make uppercase
#include <iostream>
#include <map>
#include <string>

using namespace std;

// function to calculate GPA
double calculateGPA(string grades) {
  // decalre variables to count the cumilative GPA and number of classes
  double cumilGPA = 0.0;
  int gradeCounter = 0;
  for (int i = 0; i < grades.size(); i++) {
    // for each letter check the switch case and add the sprcific number of
    // points
    char letter = grades[i];
    switch (letter) {
        //only add to the grade counter if the case is a letter
    case 'A':
      cumilGPA += 4.0;
      gradeCounter++;
      break;
    case 'B':
      cumilGPA += 3.0;
      gradeCounter++;
      break;
    case 'C':
      cumilGPA += 2.0;
      gradeCounter++;
      break;
    case 'D':
      cumilGPA += 1.0;
      gradeCounter++;
      break;
    case 'F':
      cumilGPA += 0.0;
      gradeCounter++;
      break;
    case '+':
      cumilGPA += 0.3;
      break;
    case '-':
      cumilGPA -= 0.3;
      break;
    default:
      break;
    }
  }
  // return the average GPA
  return (cumilGPA / gradeCounter);
}

int main() {
  string grades;
  // ask the user for their grades
  cout << "Enter your grades in the following format: A,B+,C-,F,etc.\n(or "
          "A-ABAB-C+BA) Doesn't matter\nAnything that is not a valid letter "
          "grade will be ignored: \n";
  cin >> grades;
  // change all the letters in grade to uppercase
  transform(grades.begin(), grades.end(), grades.begin(), ::toupper);
  // calculate the GPA and print it
  double gpa = calculateGPA(grades);
  cout << "Your GPA is: " << gpa << endl;
  return 0;
}