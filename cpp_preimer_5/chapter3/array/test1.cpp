#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

void test1()
{
    int arr[5] = {10,20,30,40,50};

    int *p1 = &arr[1];  // p1 = arr[1], *p1 = 20
    int *p2 = &arr[4];  // p2 = arr[4], *p2 = 50

    cout << *p2 - *p1 << endl;      // 30
    cout << p2 - p1 << endl;        // 3

    p1 = p1 +=3;
    cout << *p1 << endl;
}

void test2()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for(auto x : arr)
        cout << x << " ";

    cout << endl;

    int *p = arr;
    int *end = arr + 5;

    while (p!= end) {
        *p = 0;
        p++;
    }

    for(auto y : arr)
        cout << y << " ";

}

void test3()
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};

    bool equal = true;

    for (int i = 0; i < 5; i++) {
        if (a[i] != b[i]) {
            equal = false;
            break;
        }
    }

    if (equal)
        cout << "arrays equal\n";
    else
        cout << "arrays not equal\n";
}

void test4()
{
    // c++中字符串结尾会自带 '\0'，而c语言中没有
    const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    const char *cp = ca;

    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }
}

// C语言风格
void test5()
{
    char s1[] = "Hello";
    char s2[] = " ";
    char s3[] = "World";

    char s4[50];

    strcpy(s4, s1);
    strcat(s4, s2);
    strcat(s4, s3);

    cout << s4 << endl;
}

// C++风格
void test6()
{
    string s1 = "Hello";
    string s2 = " ";
    string s3 = "World";

    string s4 = s1 + s2 + s3;

    cout << s4 << endl;
}

// 整型数组初始化vector
void test7()
{
    int arr[5] = {1,2,3,4,5};
    vector<int> v(begin(arr), end(arr));

    for(auto x:v)
        cout << x << " ";
    cout << endl;
}

// 整型vector初始化数组
void test8()
{
    vector<int> v = {10,20,30,40,50};
    int arr[5];

    // 1.
    for(size_t i = 0; i < v.size(); i++){
        arr[i] = v[i];
    }

    // 2.
    copy(v.begin(), v.end(), arr);

    for(auto x:arr)
        cout << x << " ";
    cout << endl;
}

int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    test7();
    test8();

    return 0;
}