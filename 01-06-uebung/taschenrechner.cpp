#include <iostream>
using namespace std;

static float einlesen(){
   float res;
   cout << "Zahl eingeben (Mit . statt ,): ";
   cin >> res;

   return res;
}

static char zeichen(){
   char res;
   cout << "Rechenoperation: ";
   cin >> res;

   return res;
}

static void rechner(){
   float zahl;
   zahl = einlesen();

   char res = zeichen();

   switch (res){
      case '+': zahl += einlesen(); break;
      case '-': zahl -= einlesen(); break;
      case '*': zahl *= einlesen(); break;
      case '/': zahl /= einlesen(); break;
      default:cout << "Operator nicht erkannt"; zahl += einlesen(); return;
   }
   
   cout << "Ergebnis: " << zahl;
}

int main(){
   rechner();
}