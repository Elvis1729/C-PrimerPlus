#include <iostream>
using namespace std;

double light_year_to_au(double ly)
{
    double au;
    au = 63240 * ly;
    return au;
}

int main()
{
    cout << "Enter the number of light years:" << endl;
    double light_year;
    cin >> light_year;
    cout << light_year << " light years = " << light_year_to_au(light_year) << " astronomical units" << endl;
    return 0;
}
