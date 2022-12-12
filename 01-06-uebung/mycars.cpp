#include <string>
#include <iostream>

using namespace std;

int main(){
    string mycars[4];
    mycars[0] = "Brumm Brumm 1";
    mycars[1] = "Brumm Brumm 2";
    mycars[2] = "Brumm Brumm 3";
    mycars[3] = "Brumm Brumm 4";

    for(string element : mycars){
        cout << element << "\n";
    }
}