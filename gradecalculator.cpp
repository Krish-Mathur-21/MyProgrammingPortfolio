#include <iostream>
using namespace std;

int main() {
    int marks[5];
    char grade;
    
    cout << "Enter marks for 5 subjects (0-100):" << endl;
    
    // Input with validation and retry
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << (i+1) << ": ";
        while(true) {
            cin >> marks[i];
            
            if(cin.fail()) {
                cin.clear(); // clear error flag
                cin.ignore(10000, '\n');
                cout << "Invalid input. Please enter a number: ";
            }
            else if(marks[i] < 0 || marks[i] > 100) {
                cout << "Invalid marks. Enter between 0 and 100: ";
            }
            else {
                break; 
            }
        }
    }
    double average = 0;
    for(int i = 0; i < 5; i++) {
        average += marks[i];
    }
    average /= 5;

    if(average >= 90)      grade = 'A';
    else if(average >= 80) grade = 'B';
    else if(average >= 70) grade = 'C';
    else if(average >= 60) grade = 'D';
    else                   grade = 'F';

    // Output
    cout << "\nAverage Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;

}
