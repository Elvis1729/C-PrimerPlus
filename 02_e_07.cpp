#include <iostream>
using namespace std;

void display(int hour, int minute)
{
    cout << "Time is  " << hour << ":" << minute << endl;
}
int main()
{
    int hour, minute;
    cout << "Enter the number of hours:" << endl;
    cin >> hour;
    cout << "Enter the number of minutes:" << endl;
    cin >> minute;
    display(hour,minute);

    return 0;
}