#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter your age: " << endl;
    int age;
    cin >> age;
    int months;
    months = age * 12;
    cout << "Your age in months is " << months << "." << endl;

    return 0;
}
