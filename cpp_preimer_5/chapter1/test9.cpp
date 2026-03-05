#include <iostream>
#include <istream>

// 打印50-100的整数相加
void sum_val(){
    int sum = 0, val = 50;

    while(val >= 50 && val < 100){
        sum += val;
        std::cout << "sum:" << sum << " val:" << val << std::endl;
        ++val;
    }
}

void sub_val(){
    int sub = 0, val = 10;
    while(val <= 10 && val > 0){
        sub -= val;
        std::cout << "sub:" << sub << " val:" << val << std::endl;
        --val;
    }
}

void range_val(){

    int val1 = 0, val2 = 0;

    std::cout << "val1:" << std::endl;
    std::cin >> val1;
    std::cout << "val2:" << std::endl;
    std::cin >> val2;
    
    while(val1 != val2){
        std::cout << "value:" << val1 << std::endl;
        if(val1 < val2){
            ++val1;
        }else{
            --val1;
        }
    }
}

int main(){
    // sum_val();
    sub_val();
    // range_val();

    return 0;
}