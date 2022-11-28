#include<iostream>
using namespace std;

double heron(double a, double b, double input);

int main(){
    double input;
    cout << "Zahl eingeben: ";
    cin >> input;

    double a = input;
    double b = 1;

    a = heron(a, b , input);

    cout << "Die Wurzel von " << input << " ist " << a;
}

double heron(double a, double b, double input){
    if(abs(a-b) > 0.00001){
        a = input / b;
        b = (a+b) / 2;
        a = heron(a, b, input);
    }

    return a;
}