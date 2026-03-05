#include <iostream>

int main() {
    int a = 100;
    int *p = &a;
    int **pp = &p;

    // ASLR(地址随机化)：操作系统为了安全，会随机栈地址。
    // 因此，每次程序运行时，栈地址都会发生变化。

    std::cout << "a = " << a << std::endl;
    std::cout << "*p = " << *p << std::endl;
    std::cout << "**pp = " << **pp << std::endl;

    std::cout << "a = " << &a << std::endl;
    std::cout << "*p = " << &*p << std::endl;
    std::cout << "**pp = " << &**pp << std::endl;
    
    std::cout << "a = " << & a << std::endl;
    std::cout << "*p = " << & *p << std::endl;
    std::cout << "**pp = " << & **pp << std::endl;

    std::cout << "a = " << &(a) << std::endl;
    std::cout << "*p = " << &(*p) << std::endl;
    std::cout << "**pp = " << &(**pp) << std::endl;

    return 0;
}