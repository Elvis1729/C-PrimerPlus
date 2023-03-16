#include <iostream>
using namespace std;

const double inch_to_meter = 0.0254;
const double pound_to_kg = 0.4545;

int main()
{
    int foot, inch, weight;
    double BMI;
    cout << "Enter your height in feet:" << endl;
    cin >> foot;
    cout << "Enter your height in inches:" << endl;
    cin >> inch;
    cout << "Enter your weight in pounds:" << endl;
    cin >> weight;
    BMI = weight * pound_to_kg / (inch * inch_to_meter) / (inch * inch_to_meter);
    cout << "Your BMI is " << BMI << " ." << endl;

    return 0;
}
