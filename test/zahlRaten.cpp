#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int random = rand()%11;
    int zahl;
    cout << "Zahl raten: ";

    for(int i = 10; i > 0; i--){
        cin >> zahl;
        if(zahl == random){
            cout << "Korrekt";
            return 0;
        }else{
            cout << "Falsch, Bitte nochmal raten: ";
        }
    }
    cout << "Keine Versuche uebrig, " << random << " war die gesuchte Zahl!!!";
}