#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your car's fuel consumption in the European style (liters per 100 kilometers):" << endl;
    double eu_fuel_consumption, us_fuel_consumption;
    cin >> eu_fuel_consumption;
    us_fuel_consumption = 1 / (eu_fuel_consumption / 3.78541 / 62.1371);
    cout << eu_fuel_consumption << " liter per 100km euqals to " 
        << us_fuel_consumption << " mile per gallon" << endl;



    return 0;
}