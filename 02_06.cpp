#include <iostream>
using namespace std;
int stone_to_lbs(int);
int main()
{
    int stone;
    cout << "Enter the weight in stone: " << endl;
    cin >> stone;
    int pounds = stone_to_lbs(stone);
    cout << stone << " stone = " << pounds << " pounds." << endl;

    return 0;
}
int stone_to_lbs(int sts)
{
    return 14 * sts;
}
