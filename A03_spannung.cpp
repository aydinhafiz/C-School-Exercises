#include <iostream>
using namespace std;

int main (){

double I;
double R;
double U;

cout<<"Spannung berechnen"<<endl;

 cout<<"Strom I in Ampere: ";
 cin>> I;

 cout<<"Widerstand R in Ohm=: ";
 cin>> R;

 U= R*I;

  cout<<"Die Spannung U betraegt: "<<U<< "Volt";

  return 0;
}
