#include <iostream>
#include <istream>

// 打印50到100的整数相加
void sum_val(){
    int sum = 0, val = 50;
    for(int i = val; i < 100; ++i){
        sum += i;
        std::cout << "sum:" << sum << " val:" << i << std::endl;
    }
}

// 打印10到0之间的整数
void sub_val(){
    int sub = 0, val = 10;
    for(int i=val; i>0; --i){
        sub -= i;
        std::cout << "sub:" << sub << " val:" << i << std::endl;
    }
}

// 输入两个整数，打印这两个整数范围内的所有整数
void range_val(){

    int val1 = 0, val2 = 0;

    std::cout << "val1:" << std::endl;
    std::cin >> val1;
    std::cout << "val2:" << std::endl;
    std::cin >> val2;
    
    int step = (val1 <= val2) ? 1: -1;

    // i = 0; 0-1 = -1
    for(int i = val1; i != val2 + step; i += step){
        std::cout << "value:" << i << std::endl;
    }
}

int main(){
    // sum_val();
    // sub_val();
    range_val();

    return 0;
}