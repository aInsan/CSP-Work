#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "Gimme a word:\n"; cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::toupper);
    cout << word << endl;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout << word << endl;
    return 0;
}