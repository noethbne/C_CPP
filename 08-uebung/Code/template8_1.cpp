#include <iostream>
using namespace std;

template<typename T, const int DIM = 1000>
struct TArray{
    T array[DIM];
    inline size_t getMemorySize(){ return DIM* sizeof(T);}
    inline size_t getSize() {return DIM;} 
};


int main(){
    TArray<int> aintArray;
    TArray<double> adblArray;

    //Befuellen Array
    for(size_t i = 0; i < aintArray.getSize(); i++) aintArray.array[i] = i;
    //Ausgabe Array
    
}
