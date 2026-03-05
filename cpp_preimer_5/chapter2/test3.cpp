#include <iostream>

int main() 
{
    unsigned u =10, u2 =42;
    signed u3 =10, u4 =42;

    std::cout << u2 - u << std::endl;   // 32
    std::cout << u - u2 << std::endl;   // 4294967264
    std::cout << -u2 << std::endl;      // 4294967254
    std::cout << -u << std::endl;       // 4294967286

    std::cout << u3 - u4 << std::endl;
    std::cout << u4 - u3 << std::endl;

    int i = 10, i2=42;
    std::cout << i2 - i << std::endl;   // 32
    std::cout << i - i2 << std::endl;   // -32
    std::cout << i - u << std::endl;    // 0
    std::cout << u - i << std::endl;    // 0

    return 0;
}