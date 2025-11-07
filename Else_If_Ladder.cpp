// if (condition1) {
//   // block of code to be executed if condition1 is true
// } else if (condition2) {
//   // block of code to be executed if the condition1 is false and condition2 is true
// } else {
//   // block of code to be executed if the condition1 is false and condition2 is false
// }









// #include <iostream>
// using namespace std;

// int main() {
//     int age = 16;

//     if (age >= 18) {
//         cout << "You can vote." << endl;
//     } else {
//         cout << "You cannot vote." << endl;
//     }

//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int marks = 75;

    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B+" << endl;
    } else {
        cout << "Grade: C or below" << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
  int time = 22;
  if (time < 10) {
    cout << "Good morning.";
  } else if (time < 20) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  return 0;
}