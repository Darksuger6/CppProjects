#include <iostream>

int ival = 1.01;
// int &rval1 = 1.01;
int &rval2 = ival;
// int &rval3;

int i =0, &rl = i;
double d = 0, &r2 =d;

// r2 = 3.14159;
// r2 = r1;
// i = r2;
// r1 = d;

int main()
{
    std::cout << "ival = " << ival << std::endl;
    // std::cout << "rval1 = " << rval1 << std::endl;
    std::cout << "rval2 = " << rval2 << std::endl;
    // std::cout << "rval3 = " << rval3 << std::endl;
}