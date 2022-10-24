#include <iostream>
using namespace std;

int main(){
    int num1 = 0, store = 0, num2 = 0;

    cout << "Zahl eingeben: ";
    cin >> num1;
    store = num1;

    while(store){
       num2 *= 10;
       num2 += store % 10;
       store /= 10; 
    }

    if(num1 == num2){
        cout << "Palindrom";
    }else{
        cout << "Nix Palindrom";
    }
}