#include <iostream>
int main()
{
    char ch = 'M';
    int i = ch;
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;

    ch = ch + 1 , i = ch;
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;
    return 0;
}
