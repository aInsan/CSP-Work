#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void helloWorld() {
    cout << "Hello World!\n";
}

void helloName() {
    char name[64];
    cout << "What is your name:\n";
    cin >> name;
    cout << "Hello " << name << "! How are you?\n";
}

void maths() {
    float x, y;
    cout << "Enter the first number: "; cin >> x;
    cout << "Enter the second number: "; cin >> y;
    cout << x+y << endl << x-y << endl;
    cout << x*y << endl << x/y << endl;
    cout << pow(x,y) << endl << fmod(x,y) << endl;
}

void password() {
    string password = "password123";
    string input;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter the password: ";
        cin >> input;

        if (input == password) {
            cout << "Welcome!" << endl;
            break;
        } else {
            attempts--;
            cout << "Incorrect password. You have " << attempts << " attempts left." << endl;
        }
    }

    if (attempts == 0) {
        cout << "You have exceeded the maximum number of attempts. Program closing." << endl;
    }
}

void search() {
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
}

void caseChange() {
    string word;
    cout << "Enter a word: "; cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::toupper);
    cout << word << endl;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout << word << endl;
}

int main() {
    char choice = ' ';
    while (choice != 'x') {
        cout << "Choose an option:\n";
        cout << "1. Hello World\n";
        cout << "2. Hello Name\n";
        cout << "3. Maths\n";
        cout << "4. Password\n";
        cout << "5. Search\n";
        cout << "6. Case Change\n";
        cout << "x. Exit\n";
        cin >> choice;

        switch (choice) {
            case '1':
                helloWorld();
                break;
            case '2':
                helloName();
                break;
            case '3':
                maths();
                break;
            case '4':
                password();
                break;
            case '5':
                search();
                break;
            case '6':
                caseChange();
                break;
            case 'x':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
