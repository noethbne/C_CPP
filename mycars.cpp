#include <string>
#include <iostream>

using namespace std;

int main(){
    string mycars[4];
    mycars[0] = "Brumm1";
    mycars[1] = "Brumm2";
    mycars[2] = "Brumm3";
    mycars[3] = "Brumm4";

    for(string element : mycars){
        cout << element << "\n";
    }
}