#include <Ampel.hpp>
#include <iostream>
#include <windows.h>

using namespace std;
phase ampel;
bool day;

void blink(){
    ampel = YELLOW;
    cout << "Ampel is YELLOW";
    Sleep(1000);
    ampel = NOTHING;
    cout << "Ampel is Not on";
    Sleep(1000);
}

bool setDaytime(){
    cout << "Day = 1, Night = 0";
    cin >> day;
    return day;
}

bool getDaytime(){
    return day;
}
