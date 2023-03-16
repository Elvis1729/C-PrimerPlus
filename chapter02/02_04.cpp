#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square with " << side
         << " feet side length." << endl;
    cout << " How fascinating!" << endl;

    return 0;
}
