#include <iostream>
#include <cmath>

using namespace std;

int HighestCommonFactor(int a, int b){
    if(a == b){
        return a;
    }else {
        int minimum= min(a, b);
        int maximum = max(a,b);

        HighestCommonFactor(minimum , maximum - minimum);
    }
}
int main()
{
    int numberOne, numberTwo;

    cout << "Enter NumberOne: ";
    cin >> numberOne;
    cout << "Enter NumberTwo: ";
    cin >> numberTwo;

    cout << "The hcf for " << numberOne << " and " << numberTwo << " is : " << HighestCommonFactor(numberOne, numberTwo);
    return 0;
}
