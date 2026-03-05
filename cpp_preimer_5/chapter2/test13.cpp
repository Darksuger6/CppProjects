#include <iostream>

int i = 42;

void test(){
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)   // 此处的变量 i 只在for循环中使用，for循环结束后自动释放
    {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;
}

int main()
{
    // int i = 100;
    // int j = i;

    // std::cout << "j = " << j << std::endl;
    test();
}