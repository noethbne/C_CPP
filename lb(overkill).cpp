#include <iostream>
using namespace std;
//NOT FERTIG
int main(){
    double x;

    do{
        cout << endl << "Programm beenden mit der Eingabe von x = 0";
        cout << endl << "Eingabe von x : ";
        cin >> x;
        const double C_SAVEX = x;

        int i = -1;

        while(x > 0 + __DBL_EPSILON__){
            i++;
            x = x / 2.0;
        }
        i -= 51;
        cout << "\nBinaerer Logarithmus von " << C_SAVEX;
        cout << " = " << i << endl;
    }while(x);
}