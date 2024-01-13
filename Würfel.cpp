#include <iostream>
#include <cmath>

using namespace std;

int main () {
double Kantenlaenge;
double volumen;
double oberflaeche;

cout<<"Kantenlaenge a eingeben: ";
cin>>Kantenlaenge;

oberflaeche= 6 * Kantenlaenge * Kantenlaenge;

volumen= Kantenlaenge * Kantenlaenge * Kantenlaenge;

cout<<"Die Oberflaeche des Wurfels betraegt: "<<oberflaeche<<endl;

cout<<"Das Volumen des Wurfels betraegt: "<<volumen;
}
