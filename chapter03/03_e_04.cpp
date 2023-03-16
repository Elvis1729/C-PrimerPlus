#include <iostream>
#include <cmath>
using namespace std;

const int hour_in_a_day = 24;
const int converter = 60;

int main()
{
    long long input_second;
    int day, hour, minute, second;
    cout << "Enter a number of seconds:" << endl;
    cin >> input_second;
    
    second = input_second % converter;
    minute = input_second / converter % converter;
    hour = input_second / converter / converter % hour_in_a_day;
    day = input_second / converter / converter / hour_in_a_day;

    cout << input_second << " seconds = " << day << " days, " << hour << " hours, "
         << minute << " minutes, " << second << " second." << endl;

    return 0; 
}
