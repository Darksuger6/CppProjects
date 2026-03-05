#include <iostream>

int main()
{
    int i = 42;
    int *pi = 0;
    int *pi2 = &i;
    int *pi3;

    pi3 = pi2;
    pi2 = 0;

    std::cout << i << std::endl;
    std::cout << &i << std::endl;

    if(pi != nullptr){
        std::cout << *pi << std::endl;
    }else{
        std::cout << "null pointer" << std::endl;
    }
    
    if(pi2 != nullptr){
        std::cout << *pi2 << std::endl;
    }else{
        std::cout << "null pointer" << std::endl;
    }

    if(pi3 != nullptr){
        std::cout << *pi3 << std::endl;
    }else{
        std::cout << "null pointer" << std::endl;
    }
    

    // std::cout << *pi << std::endl;
    // std::cout << *pi2 << std::endl;
    // std::cout << *pi3 << std::endl;

    return 0;
}