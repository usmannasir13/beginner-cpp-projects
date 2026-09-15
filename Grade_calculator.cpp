#include <iostream>
using namespace std;
 
// Function to calculate the average of marks stored in an array
double calculateAverage(int marks[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return (double)sum / size;
}
 
// Function to assign a grade based on the average marks
char getGrade(double average) {
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}
 
int main() {
    const int SUBJECTS = 5;
    int marks[SUBJECTS];
    string studentName;
 
    cout << "Enter student name: ";
    getline(cin, studentName);
 
    for (int i = 0; i < SUBJECTS; i++) {
        cout << "Enter marks for subject " << (i + 1) << " (out of 100): ";
        cin >> marks[i];
    }
 
    double average = calculateAverage(marks, SUBJECTS);
    char grade = getGrade(average);
 
    cout << "\n--- Result Card ---" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Marks: ";
    for (int i = 0; i < SUBJECTS; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;
 
    return 0;
}
