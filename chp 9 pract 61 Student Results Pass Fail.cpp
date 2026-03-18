#include <iostream>

using namespace std;

class Student
{
private:
    char student_name[50];
    int marks;

public:

    void set_student_data(char name[], int m)
    {
       
        int index = 0;

        while (name[index] != '\0')
        {
            student_name[index] = name[index];
            index++;
        }
        student_name[index] = '\0';

        if (m >= 0 && m <= 100)
        {
            marks = m;
        }
        else
        {
            marks = 0;
        }
    }

    bool is_pass()
    {
        if (marks >= 40)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void display_result()
    {
        cout << "Student Name: " << student_name << endl;
        cout << "Marks: " << marks << endl;

        if (is_pass() == true)
        {
            cout << "Result: PASS" << endl;
        }
        else
        {
            cout << "Result: FAIL" << endl;
        }
    }
};

int main()
{
    Student student1;

    student1.set_student_data("Marquentis", 55);
    student1.display_result();

    return 0;
}