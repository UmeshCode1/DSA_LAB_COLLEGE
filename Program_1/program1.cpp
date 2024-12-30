// Program to input marks of 5 subjects and print the total and percentage using arrays.

#include <iostream>
using namespace std;
int main()
{
    int marks[5], i, total = 0;
    float percentage;
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";
    cout << "Enter marks of 5 subjects: \n";
        for (i = 0; i < 5; i++)
    {
      cout<<"Subject "<<i+1<<": ";
      cin >> marks[i];
      total += marks[i];
    }
    percentage = (float)total / 5;
    cout << "Total marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}


// Output:
// Program to input marks of 5 subjects and print the total and percentage using arrays.

// Umesh Patel
// Enrollment Number: 0126AL231140
// Enter marks of 5 subjects:
// Subject 1: 90
// Subject 2: 80
// Subject 3: 70
// Subject 4: 60
// Subject 5: 50
// Total marks = 350
// Percentage = 70%


