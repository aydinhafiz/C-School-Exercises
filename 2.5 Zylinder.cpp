#include <iostream>
#include <cmath>

using namespace std;

int main( ){
double Durchmesser ,Hohe, Volumen, Mantelflaeche;

cout<<"Geben sie Durchmesser ein: ";
cin>>Durchmesser;
cout<<"Geben sie Hohe ein: ";
cin>>Hohe;

Volumen = (M_PI * pow(Durchmesser, 2) / 4) * 4;

cout<<"Wert von Volumen ist: "<<Volumen<<endl;

Mantelflaeche = M_PI * Durchmesser * Hohe;

cout<<"Wert von Mantelflaeche ist: "<<Mantelflaeche;

double HoheB,VolumenB,DurchmesserB;

cout<<"Geben sie Hohe ein: ";
cin>>HoheB;

cout<<"Geben sie Volumen ein: ";
cin>>VolumenB;

DurchmesserB = sqrt(4*VolumenB / M_PI * HoheB);

cout<<"Durchmesser ist: "<<DurchmesserB;

}
