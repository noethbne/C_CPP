#include <iostream>
using namespace std;

int main(){
    int x = 0, count = 0, copX;
    cout << "Eingabe von x: ";
    cin >> x;
    copX = x;
    while(copX > 1){
        count++;
        copX /= 2;
    }
    

    cout << "Binaerer Logarithmus von " << x << " = " << count;
}