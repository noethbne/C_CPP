#include <iostream>
#include <array>

template<typename T, const int DIM = 1000>
struct TArray
{
    std::array<T, DIM> aArray;
};

int main(){
    TArray<int> aintArray;
    TArray<double> adblArray;

    for(size_t i = 0; i  < aintArray.aArray.size(); i++) aintArray.aArray.at(i) = i;

    for(size_t i = 0; i < aintArray.aArray.size(); i++) std::cout << aintArray.aArray.at(i);

    std::cout <<"Speichergroesse: " << aintArray.aArray.max_size()*sizeof(int);
    std::cout <<"Anzahl Elemente: " << aintArray.aArray.max_size();

    for(size_t i = 0; i  < adblArray.aArray.size(); i++) adblArray.aArray.at(i) = i;

    for(size_t i = 0; i < adblArray.aArray.size(); i++) std::cout << adblArray.aArray.at(i);

    std::cout <<"Speichergroesse: " << adblArray.aArray.max_size()*sizeof(int);
    std::cout <<"Anzahl Elemente: " << adblArray.aArray.max_size();
}
