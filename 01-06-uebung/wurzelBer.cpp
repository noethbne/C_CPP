#include<iostream>

using namespace std;
int main(){
    double input;
    cout << "Zahl eingeben: ";
    cin >> input;

    double a = input;
    double b = 1;
    while (abs(a-b) > 0.00001){
        a = input / b;
        b = (a + b) / 2;
    }
    cout << "Die Wurzel von " << input << " ist " << a;
}


