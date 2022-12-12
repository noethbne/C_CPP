#include <iostream>
using namespace std;

int main(){
    int a=0, b=0;
    double c=0;
    char op = '+';
    cout << "Zahl 1:\t";
    cin >> a;
    cout << "Operation:\t";
    cin >> op;
    cout << "Zahl 2:\t";
    cin >> b;

    switch(op){
        case '+': c = a + b; break;
        case '-': c = a - b; break;
        case '*': c = a * b; break;
        case '%': c = a % b; break;
        case '/': c = a / b; break;
        default: cout << "Operation nicht erkannt, + als default"; c = a + b;
    }

    cout << "Ergebnis:\t" << c;
}