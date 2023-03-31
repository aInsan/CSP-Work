#include <iostream>
#include <string>

using namespace std;

int main() {
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
    return 0;
}
