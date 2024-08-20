#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main()
{
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    for (int i = 1; i <= numCourses; ++i)
    {
        char grade;
        double credits;

        cout << "Enter grade for course " << i << " (A/B/C/D/F): ";
        cin >> grade;

        cout << "Enter credits for course " << i << ": ";
        cin >> credits;

        // Calculate grade points based on the grade
        double gradePoints;
        switch (grade)
        {
        case 'A':
            gradePoints = 4.0;
            break;
        case 'B':
            gradePoints = 3.0;
            break;
        case 'C':
            gradePoints = 2.0;
            break;
        case 'D':
            gradePoints = 1.0;
            break;
        case 'F':
            gradePoints = 0.0;
            break;
        default:
            cout << "Invalid grade entered. Assuming F (0.0).\n";
            gradePoints = 0.0;
        }

        // Update total credits and grade points
        totalCredits += credits;
        totalGradePoints += gradePoints;
    }

    // Calculate GPA
    double gpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "Your GPA for this semester: " << gpa << endl;

    // You can extend this to calculate CGPA over multiple semesters!

    return 0;
}
