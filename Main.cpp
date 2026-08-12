#include <iostream>
// This program asks three numbers to the user, and outputs them in a single line!
int main()
{
    std::cout << "Enter three numbers:\n";

    int x, y, z;
    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
}