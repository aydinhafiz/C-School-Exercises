#include <iostream>
using namespace std;

int main (){

double R1;
double R2;
double Ohm;

cout<<"Widerstands-Parallelschaltung"<<endl;

 cout<<"R1 in Ohm eingeben: ";
 cin>> R1;

 cout<<"R2 in Ohm eingeben: ";
 cin>> R2;

 Ohm = (R1 * R2) / (R1 + R2);

  cout<<"Der Gesamtwiderstand betraegt: "<<Ohm<< "Ohm";

  return 0;
}
