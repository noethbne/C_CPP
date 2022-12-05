// tmplFind8.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>
using std::array; using std::cin;using std::cout;

namespace UTIL{
    template<typename T, typename P>
    P find(P first, P behind_end, T x) {
	    while (first != behind_end && *first != x) first++;
	    return first; // Ergebnis
    }
}

int main()
{
    int iSearch = 0;
    array<int, 10> iArray{ 1,2,3,4,5,6,7,8,9,10 };
    array<int, 10>:: iterator it;
    do{
        cout << "Eins bositive Number pls: ";
        cin >> iSearch;
        it = UTIL::find(iArray.begin(), iArray.end(), iSearch);
        if(it == iArray.end()){
            cout <<"nicht gefunden!";
            break;
        }else cout <<*it << " gefunden!\n";
    }while(it);

    return 0;
}