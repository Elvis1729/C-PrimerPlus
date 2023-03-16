#include <iostream>
using namespace std;

int main()
{
    long world_population;
    int us_population;
    cout << "Enter the world's population:\n";
    cin >> world_population;
    cout << "Enter the population of the US" << endl;
    cin >> us_population;
    cout << "The population of the US is " << double(us_population) / double(world_population) * 100 << "% of the world population." << endl;

    
    return 0;
}
