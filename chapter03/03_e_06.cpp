#include <iostream>
using namespace std;

int main()
{   
    double mile, gallon, km, liter;
    cout << "Enter miles you have driven:" << endl;
    cin >> mile;
    cout << "Enter gallons of gasoline you have used:" << endl;
    cin >> gallon;
    cout << "Enter distance in kilometers:" << endl;
    cin >> km;
    cout << "Enter petrol in liters:" << endl;
    cin >> liter;
    cout << "The miles per gallon your car has gotten: " << mile / gallon << endl;
    cout << "The liters per 100 kilometers of the car: " << liter * 100 / km << endl;

    return 0;
}
