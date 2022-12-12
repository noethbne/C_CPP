#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Anzahl der Vektorelemente: ";
    cin >> n;

    vector<double> x(n);

    for(size_t k = 0; k < x.size(); ++k){
        x.at(k) = 1.0 / (k + 1.0);
        if(k == 0)
            cout << x.at(k);
        else
            cout << " , " << x.at(k);
    }

    double vlaenge = 0.0;
    for(size_t k = 0; k < x.size(); ++k){
        vlaenge += x[k] * x[k];
    }
    vlaenge = sqrt(vlaenge);

    cout << "\n Die Laenge des Vektors betraegt: " << vlaenge << endl;

    return 0;
}