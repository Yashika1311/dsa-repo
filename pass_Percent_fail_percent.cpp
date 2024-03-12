#include <iostream>
using namespace std;

int main()
{
    int student_no;

    cout<<"enter the number of students in class";
    cin>>student_no;

    double passed=0;
    double failed=0;

    int student[student_no];
    for(int i=0;i<student_no;i++)
    {
        cout<<"Enter the students marks:";
        cin>>student[i];

        if(student[i]<40)
        {
           failed+=1;
        }
        else if(student[i]>=40)
        {
            passed+=1;
        }
    }

    float passing_percent=(passed/student_no)*100;
    float failing_percent=(failed/student_no)*100;


    cout<<"Passing percentage is:"<<passing_percent<<endl;
    cout<<"failing percentage is:"<<failing_percent;
}