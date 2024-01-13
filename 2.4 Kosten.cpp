#include <iostream>

using namespace std;

int main( ){
double fixenKosten, fuerEinProdukt, preisEinProdukt, mengeProdukt, gewinn;
cout<<"Gewinnberechnung version 1.0"<<endl;
cout<<"Bitte geben sie fixen Kosten ein: ";
cin>>fixenKosten;
cout<<"Bitte geben sie Kosten fuer ein Produkt: ";
cin>> fuerEinProdukt;
cout<<"Bitte geben Sie den Erloes fuer ein Produkt ein: ";
cin>> preisEinProdukt;
cout<<"Wie viele Produkte sollen hergestellt werden: ";
cin>>mengeProdukt;

gewinn = (mengeProdukt * preisEinProdukt ) - (mengeProdukt * fuerEinProdukt) - fixenKosten;

cout<<"Der Gewinn betraegt: "<<gewinn;

}
