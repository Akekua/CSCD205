#include <iostream>
using namespace std;
int main()

{
    int grade;
    cout << "Please enter your grade: ";
    cin >> grade;

    if (grade >= 90)
    {
    cout<<"Your grade is "<<'A';
    }
   else if (grade>=80)
   {
    cout<<"Your grade is " <<'B';
   }
   else if (grade>=70)
    {
    cout<<"Your grade is "<<'C';
   }
    else if (grade>=60)
    {
        cout<<"Your grade is "<<'D';
    }
        else if(grade>=0)
        {
            cout<<"Your grade is "<<'E';
        }
          else
        {
        cout<<"Your grade is "<<'F';
        }
        return 0;
        }
