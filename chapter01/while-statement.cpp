#include <iostream>

int main() 
{
    int sum = 0, i = 0;
    while (i <= 10) 
    {
        sum += i;
        ++i;
    }
    std::cout << "Sum of value is " << sum << std::endl;
    return 0;
}
