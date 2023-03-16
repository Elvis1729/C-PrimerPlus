#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a Celcius value:" << endl;
    float tem_C;
    cin >> tem_C;
    float tem_F;
    tem_F = 1.8 * tem_C + 32.0;
    cout << tem_C 
        << " degrees in Celcius equals to " 
        << tem_F 
        << " degrees in Fahrenheit.";

    return 0;
}
