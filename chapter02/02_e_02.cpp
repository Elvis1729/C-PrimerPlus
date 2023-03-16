#include <iostream>
using namespace std;

int main()
{
    int distance_in_furlongs, distance_in_yards;
    cout << "Enter a distance in furlongs:" << endl;
    cin >> distance_in_furlongs;
    distance_in_yards = distance_in_furlongs * 220;
    cout << "That equals to " << distance_in_yards << " yards." << endl;


    return 0;
}
