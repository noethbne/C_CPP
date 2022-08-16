#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int i = 10;
    while(i > 0){
        cout << rand()%11 << "\n";
        i = i - 1;
    }
}