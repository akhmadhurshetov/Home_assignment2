#include <iostream>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students in the course: ";
    cin >> numStudents;
   
    int numGroups = numStudents / 24;
    int numFreeComputers = 24 - (numStudents % 24);
   
    cout << "Number of groups: " << numGroups << endl;
    cout << "Number of free computers when the last group comes: " << numFreeComputers << endl;
   
    return 0;
}