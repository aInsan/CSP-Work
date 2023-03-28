#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x, y;
    cout << "Primero numero por favor:"; cin >> x;
    cout << "La deuxieme nombre maintenant:"; cin >> y;
    cout << x+y << endl << x-y << endl;
    cout << x*y << endl << x/y << endl;
    cout << pow(x,y) << endl << fmod(x,y) << endl;
    return 0;
}
