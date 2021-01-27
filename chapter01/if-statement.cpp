#include <iostream>

int main() {
    std::cout << "Input numbers and it will tell you how often the number was repeated" << std::endl;
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> currVal) {
            if (val == currVal) 
                ++cnt;
            else {
                std::cout << currVal << " occurs " 
                    << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
    }
    return 0;
}
