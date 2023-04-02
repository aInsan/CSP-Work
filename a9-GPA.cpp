#include <algorithm> //for uppercase and removing invalid grades
#include <iostream>
#include <string>

using namespace std;

double calculateGPA(string grades) {
  // declare variables to count the cumulative GPA and number of classes
  double cumilGPA = 0.0;
  int gradeCounter = 0;
  for (int i = 0; i < grades.size(); i++) {
    // for each letter check the switch case and add the specific number of
    // points
    char letter = grades[i];
    switch (letter) {
    case 'A':
      if (i + 1 < grades.size() && grades[i + 1] == '+') {
        //ignore A+
        break;
      }
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
      if (i + 1 < grades.size() &&
          (grades[i + 1] == '+' || grades[i + 1] == '-')) {
        // ignore F+ and F- grades
        break;
      }
      cumilGPA += 0.0;
      gradeCounter++;
      break;
    case '+':
      if (i > 0 && (grades[i - 1] == 'F' || grades[i - 1] == 'A')) {
        // ignore F+ and A+ grades
        break;
      }
      cumilGPA += 0.3;
      break;
    case '-':
      if (i > 0 && (grades[i - 1] == 'F')) {
        // ignore F- grades
        break;
      }
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
  while (true) {
    // ask the user for their grades
    cout << "\033[0m========================\nEnter your grades in any "
            "format\nAnything that is not a valid "
            "letter grade will be ignored:\n------------\ntype 'quit' to "
            "exit.\n========================\n";
    cin >> grades;
    if (grades == "quit") {
      break;
    }
    // change all the letters in grade to uppercase
    transform(grades.begin(), grades.end(), grades.begin(), ::toupper);
    // calculate the GPA and print it
    double gpa = calculateGPA(grades);
    //make the terminal cool color for output
    cout << "\n\033[1;35m========================\nYour GPA is: " << gpa << endl
         << "========================\n\n";
  }
  return 0;
}