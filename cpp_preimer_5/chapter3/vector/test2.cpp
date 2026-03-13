#include <iostream>
#include <vector>
#include <string>

using namespace std;

void test1()
{
    vector<int> v2;
    for(int i = 0; i !=100; ++i){
        v2.push_back(i);
    }
}

void test2()
{
    string word;
    vector<string> text;
    while(cin >> word){
        text.push_back(word);
    }
}

void test3()    // 读入整数存入vector 
{
    int i;
    vector<int> v1;
    while (cin >> i){
        v1.push_back(i);
    }
}

void test4()    // 读入字符串存入vector 
{
    string s;
    vector<string> v2;
    while(cin >> s){
        v2.push_back(s);
    }
}

int main()
{
    // test1();
    // test2();
    // test3();
    test4();

    return 0;
}