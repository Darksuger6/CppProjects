#include <iostream>

using namespace std;

int main() {
    int a,b;
    
    while (true) {
        try {
            cout << "two integers: ";
            cin >> a >> b;

            if (b == 0)
                throw runtime_error("don't 0");

            cout << "result: " << a / b << endl;
            break;

        }
        catch (runtime_error err) {
            cout << err.what() << endl;

            cout << "re-enter? (y/n): ";
            char c;
            cin >> c;

            if (!cin || c == 'n')
                break;
        }
    }

    return 0;
}