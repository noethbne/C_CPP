#include<iostream>
using namespace std;

int main(){
    for(int i = 31; i < 256; i++){
        cout << "i = " << (int) i << " ==> char = " << (char) i << "\t";
        if(i % 3 == 0) cout << endl;
    }
}