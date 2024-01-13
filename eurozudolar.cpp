#include <iostream>
using namespace std;

int main(){

double euro;     //Variablendeklaration
double kurs;
double dollar;

    cout<<"Betrag in Euro: ";   //Eingabe
    cin>>euro;
    cout<<"Kurs in Dollar pro 1 Euro: ";
    cin>> kurs;

    dollar=euro * kurs ; //Berechnung
    cout<<endl<<euro<<" Euro entsprechen "<<dollar<<" Dollar"<<endl; // Ausgabe

return 0;
}
