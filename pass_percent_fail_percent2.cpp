#include <iostream>
using namespace std;

int main()
{
    int student_no,DSA,javascript,html;

    cout<<"enter the number of students in class";
    cin>>student_no;

    double passed=0;
    double failed=0;

    int student[student_no];
    for(int i=0;i<student_no;i++)
    {
        cout<<"Enter the marks of DSA:";
        cin>>DSA;

        cout<<"Enter the marks of javascript:";
        cin>>javascript;

        cout<<"Enter the marks of html:";
        cin>>html;


        if (DSA>=45 && javascript>=45 && html>=45)
        {
            passed+=1;
        }
        else
        {
            failed+=1;
            
        }
        
    }
    float student_passing=(passed/student_no)*100;
    float student_failing=(failed/student_no)*100;
    cout<<"Student Passing percentage is:"<<student_passing<<endl;
    cout<<"Student Failing percentage is :"<<student_failing;
        


}