#include <iostream>
#include <string>
#include <typeinfo>

void modify_fakeString(std::string& s)
{
    for(auto c : s){
        c = 'X';
    }
    std::cout << " no&: " << s << std::endl;
}

void modify_relString(std::string& s)
{
    for(auto &c : s){
        c = 'X';
    }
    std::cout << "yes&: " <<  s << std::endl;
}

void modify_charString(std::string& s)
{
    for(char &c : s){
        c = 'X';
    }
    std::cout << "char&: " <<  s << std::endl;
}

// 如果不加 &，修改的是 副本，原字符串不会改变。加 & 则会修改原字符串。

int main()
{
    std::string s = "hello world";
    modify_fakeString(s);
    modify_relString(s);
    modify_charString(s);
    return 0;
}