#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your height in inches:_____" << endl;
    int height, foot, inch;
    const int inch_to_foot = 12;
    cin >> height;
    foot = height / inch_to_foot;
    inch = height % inch_to_foot;
    cout << "That equals to " << foot << " feet and " 
         << inch << "inches." << endl;

    return 0;
}
