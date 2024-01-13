#include <iostream>
#include <cmath>

using namespace std;

int main (){

double Kelvin;
const double Formel = 273.15;
double Celsius;

cout<<"Kelvin in Celsius Umrechnen"<<endl;
cout<<"Temp. in Kelvin: ";
cin>> Kelvin;

Celsius = Kelvin - Formel;

cout<<Kelvin<<" Kelvin = "<<Celsius<<" Celsius";


return 0;
}
