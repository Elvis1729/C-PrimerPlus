#include <iostream>
using namespace std;

const int converter = 60;
int main()
{
    double degree, minute, second, result;
    cout << "Enter a latitude in degrees, minutes, and seconds" << endl;
    cout << "First, enter the degrees:" << endl;
    cin >> degree;
    cout << "Next, enter the minutes of arc:" << endl;
    cin >> minute;
    cout << "Finally, enter the seconds of arc:" << endl;
    cin >> second;
    result = degree + minute / converter + second / converter / converter;
    cout << degree << "degrees, " << minute << "minutes, " << second << "seconds = "
         << result << "degrees" << endl;
    return 0;
}
