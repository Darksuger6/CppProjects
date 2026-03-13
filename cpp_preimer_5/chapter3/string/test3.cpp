#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    string word;
    string result;

    while (cin >> word){
        result += word + " ";
    }

    cout << result << endl;

    return 0;
}