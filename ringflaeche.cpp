#include <iostream>
 #include <cmath>

 using namespace std;

 int main () {

double D;
double A;
double durchmesser;

cout<<"D:";
cin>>D;
cout<<"Durchmesser:";
cin>>durchmesser;

A= M_PI/4*(pow(D,2)-pow(durchmesser,2));

cout<<"Die Flaeche eines Kreisringes ist: "<<A;


return 0;
 }


