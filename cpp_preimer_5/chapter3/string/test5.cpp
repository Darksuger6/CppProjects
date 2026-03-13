#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void rm_punct(string& s){
    string result;
    for(auto c : s){
        if(!ispunct(c)){    
            result += c;
        }
    }
    std::cout << result << std::endl;
}

int main() {

    string s;
    cin >> s;
    rm_punct(s);
    return 0;
}