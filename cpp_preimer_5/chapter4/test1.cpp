#include <iostream>

using namespace std;

void test1()
{
    int a = 5 + 10 * 20 / 2;    // 105
    cout << a << endl;

    int b = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;   // 94, but 24 & 4 = 0，b = 91
    cout << b << endl;

    int c = -30 * 3 + 21 / 5;   // -86 
    cout << c << endl;

    int d = -30 * 3 * 21 / 5;   // -378
    cout << d << endl;

    int e = 30 / 3 * 21 % 5;    // 0
    cout << e << endl;

    int f = -30 / 3 * 21 % 4;   // 5, but 
    cout << f << endl;
}

void test2()
{
    unsigned long ul1 = 3, ul2 = 7;
    cout << (ul1 & ul2) << endl;    // 位与，二进制同时为1的位才为1
    cout << (ul1 | ul2) << endl;    // 位或，二进制有一位为1的位为1
    cout << (ul1 && ul2) << endl;   // 逻辑与，都非0才为1
    cout << (ul1 || ul2) << endl;   // 逻辑或，有一个非0就为1
}

void test3()
{
    /* sizeof 返回所占字节数 */

    int x[10];
    int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;   
    cout << sizeof(p)/sizeof(*p) << endl;  

    cout << "" << endl;
}

int main()
{
    // test1();
    // test2();
    // test3();

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    cout << *p << endl;

    return 0;
}