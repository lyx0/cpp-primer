#include <iostream>

int main() 
{
    std::cout << "Input 3 numbers seperated by newline. quit with ctrl + d" << std::endl;
    int v1 = 0, v2 = 0, v3 = 0;
    std::cin >> v1 >> v2 >> v3;
    std::cout << v1 + v2 + v3 << std::endl;
}
