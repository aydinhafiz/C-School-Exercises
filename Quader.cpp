#include <iostream>

using namespace std;

int main( ){

double a,b,c;
double oberflaeche, volumen;

cout << "Gib die Laengen der Kantenlaengen a, b und c des Quaders ein: ";
cin >> a >> b >> c;

oberflaeche= 2* (a * b + b * c + c * a);

volumen = a * b * c;

cout<<"Die Oberflaeche des Quaders betraegt: "<<oberflaeche<<endl;
cout<<"Das Volumen des Quaders betraegt: "<<volumen;


}
