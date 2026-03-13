#include <iostream>
#include <vector>
#include "../../src/1/Sales_item.h"

/*
    编译时：
    g++ test1.cpp -g -o test1 -I ../../src
*/   

using namespace std;

void initVector()
{
    // vector<vector<int>> ivec;
    // vector<vector<string>> svec = ivec;
    // vector<string> svec(10, "null");
}

void initVector2()
{
    /*
        ()和{}的区别：
        ()表示函数调用，{}表示初始化列表
    */
   
    vector<int> v1;
    vector<int> v6{};
    
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<string> v4(10);
    vector<string> v5(10, "hi");

    vector<int> v7{10};
    vector<int> v8{10, 42};
    vector<string> v9{10};
    vector<string> v10{10, "hi"};
}

int main()
{
    // initVector();
    initVector2();

    return 0;
}