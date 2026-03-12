// 标准库类型string

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void read_string()
{
    string word;
    while (cin >> word)
        cout << word << endl;
}

void read_line()
{
    string line;
    while (getline(cin, line))
        cout << line << endl;
}

int main()
{
    // read_string();
    // read_line();
    
    
    return 0;
}