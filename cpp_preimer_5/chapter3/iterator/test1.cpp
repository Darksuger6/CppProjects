#include <iostream>
#include <string>
#include <vector>

using namespace std;

void test1(string &s)
{
    if (s.begin() != s.end()){
        auto it = s.begin();
        *it = toupper(*it);
    }
}

void test2(string &s)
{
    for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);
}

void test3()
{
    vector<int> v{1,2,3,4,5};
    for(auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
}

void test4()
{
    vector<string> text{
        "hello world",
        "this is a test",
        " ",
    };

    for(auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for(auto &c : *it){
            c = toupper(c);
        }
        cout << "text:" << *it << endl;
    }
}

void test5()
{
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    for(auto x : v)
        cout << x << " ";

    cout << endl;

    for (auto it = v.begin(); it != v.end(); ++it) {
        *it = *it * 2;
    }

    for(auto y : v)
        cout << y << " ";
    
}

int main()
{
    string s("some string");
    // test1(s);
    // test2(s);
    cout << s << endl;

    // test3();
    // test4();
    test5();

    return 0;
}