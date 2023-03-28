#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter a character to search for: ";
    cin >> ch;

    cout << "Positions of '" << ch << "' in the string: ";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            cout << i << ", ";
        }
    }

    cout << endl;

    return 0;
}