#include <iostream>
using namespace std;

int main(){
    bool ships[5][5]{
        {0,1,1,0,0},
        {0,0,0,0,0},
        {0,0,1,0,0},
        {0,0,1,0,1},
        {0,0,1,0,1}
    };

    int cordA = 0, cordB = 0, count = 0;
    bool shipsLeft = 1;
    while(true){
        shipsLeft = 0;
        count++;
        cout << "Coordinate A (1-5):\t";
        cin >> cordA;
        cout << "Coordinate B (1-5):\t";
        cin >> cordB;

        if(cordA > 5 || cordB > 5){
            cout << "Coordinates out of Bonds!!!!\n";
            cout << "Coordinate A (1-5):\t";
            cin >> cordA;
            cout << "Coordinate B (1-5):\t";
            cin >> cordB;   

        }
        cordA = cordA - 1;
        cordB = cordB - 1;


        if(ships[cordA][cordB] == 1){
            cout << "Hit\n";
            ships[cordA][cordB] = 0;
        }else{
            cout << "Miss\n";
        }
        
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                if(ships[i][j] == 1)
                {
                    shipsLeft = 1;
                }
            }
        }

        if(!shipsLeft){
            cout << "Game Over, " << count - 7 << " missed Shots recorded\nDigge Hits fuer digge Chicks~~~~~~";
            break;
        }

    }
}