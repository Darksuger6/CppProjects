#include <iostream>
#include "../src/1/Sales_item.h"

/*
    编译时：
    g++ test20.cpp -g -o test20 -I ../src
*/   

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if(item1.isbn() < item2.isbn()){
        std::cout << item1 + item2 << std::endl;
        return 0;
    }else{
        std::cerr << "ISBN not same" << std::endl;
        return 1;
    }
}