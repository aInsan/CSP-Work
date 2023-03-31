#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    char letter;

    cout << "Enter a string: ";
    cin >> word;

    cout << "Enter a character to search for: ";
    cin >> letter;

    cout << "Positions of '" << letter << "' in the string: ";

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == letter) {
            cout << i << ", ";
        }
    }

    cout << endl;

    return 0;
}