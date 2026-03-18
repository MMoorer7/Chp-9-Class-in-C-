#include <iostream>

using namespace std;

class MarksTable
{
private:
    int marks[3][4];

public:

    void input_marks()
    {
        for (int student_index = 0; student_index < 3; student_index++)
        {
            cout << "Enter marks for Student " << student_index + 1 << endl;

            for (int subject_index = 0; subject_index < 4; subject_index++)
            {
                cout << "Subject " << subject_index + 1 << ": ";
                cin >> marks[student_index][subject_index];
            }
        }
    }

    void display_marks()
    {
        cout << "\nMarks Table:\n";

        for (int student_index = 0; student_index < 3; student_index++)
        {
            cout << "Student " << student_index + 1 << ": ";

            for (int subject_index = 0; subject_index < 4; subject_index++)
            {
                cout << marks[student_index][subject_index] << " ";
            }

            cout << endl;
        }
    }

    void display_student_average(int student_index)
    {
        int sum = 0;

        for (int subject_index = 0; subject_index < 4; subject_index++)
        {
            sum = sum + marks[student_index][subject_index];
        }

        float average = sum / 4.0;

        cout << "Average of Student " << student_index + 1 << " = " << average << endl;
    }
};

int main()
{
    MarksTable table;

    table.input_marks();
    table.display_marks();
    table.display_student_average(0);

    return 0;
}