#include <iostream>
#include <array>
using namespace std;

template<typename T, const int DIM = 1000000>
struct TArray
{
    T* aptr = new T[DIM];
    long elements = DIM;
    inline void freeMemory(){
        delete[] aptr;
        aptr = nullptr;
        elements = 0;
    }
    inline long getMemorySize(){return elements*sizeof(T);}
    inline long getSize(){return DIM;}
    inline bool isAllocated(){
        if(aptr != nullptr)return true;
        else return false;
    }
};

int main(){
    TArray<int> aintArray;
    TArray<double> adblArray;

    for(size_t i = 0; i  < aintArray.getSize(); i++) aintArray.aptr[i] = i;

    for(size_t i = 0; i < aintArray.getSize(); i++) if(i%999 == 0)cout << aintArray.aptr[i] << "\t";

    cout <<"\nSpeichergroesse: " << aintArray.getMemorySize();
    cout <<"\nAnzahl Elemente: " << aintArray.getSize();

    for(size_t i = 0; i  < adblArray.getSize(); i++) adblArray.aptr[i] = i;

    for(size_t i = 0; i < adblArray.getSize(); i++) if(i%999 == 0)cout << adblArray.aptr[i] << "\t";

    cout <<"\nSpeichergroesse: " << adblArray.getMemorySize();
    cout <<"\nAnzahl Elemente: " << adblArray.getSize();

    cout << "\n" << adblArray.isAllocated();
    adblArray.freeMemory();
    cout << "\n" << adblArray.isAllocated();
}