#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void helloWorld() {
    //cool hello world program!
    cout << "Hello World!\n";
}

void helloName() {
    //cool hello world program!
    char name[64];
    cout << "What is your name:\n";
    cin >> name;
    cout << "Hello " << name << "! How are you?\n";
}

void maths() {
    float x, y;
    cout << "Primero numero por favor:"; cin >> x;
    cout << "La deuxieme nombre maintenant:"; cin >> y;
    cout << x+y << endl << x-y << endl;
    cout << x*y << endl << x/y << endl;
    cout << pow(x,y) << endl << fmod(x,y) << endl;
}

void password() {
    string correctPass = "AmongusSUS";
    string pass;

    for (int i = 0; i < 3; i++) {
        cout << "Enter the password: ";
        cin >> pass;

        if (pass == correctPass) {
            cout << "Welcome!" << endl;
            break;
        } else if (i < 2){
            cout << "Incorrect! You have " << 2 - i << " attempts left." << endl;
        } else {
            cout << "You have exceeded the maximum number of attempts. Closed Program." << endl;
        }
    }
}

void search() {
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
