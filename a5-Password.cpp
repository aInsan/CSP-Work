#include <iostream>
#include <string>

using namespace std;

int main() {
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

    return 0;
}
