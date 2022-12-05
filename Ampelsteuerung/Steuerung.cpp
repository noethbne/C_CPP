#include <iostream>
#include <Ampel.hpp>

using namespace std;

int main(){
    bool day = setDaytime();
    while(true){
        if(day == true){
            
        }else if(day == false){
            blink();
        }
    }
}
