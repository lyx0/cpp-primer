#include <iostream>

int main()
{
    int sum = 0, i = 0;
    std::cout << "Enter numbers to sum up, quit with ctrl + d" << std::endl;
    while (std::cin >> i)
        sum += i;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
