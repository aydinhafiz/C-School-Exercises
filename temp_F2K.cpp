#include <iostream>
#include <cmath>

using namespace std;

int main (){

double Fahrenheit;
double Celsius;
double Kelvin;

cout<<"Fahrenheit in Celsius umrechnen"<<endl;
cout<<"Temp. in Fahrenheit: ";
cin>> Fahrenheit;

Celsius = 5.0/9.0 * (Fahrenheit - 32.0) ;

Kelvin = Celsius + 273.15;

cout<<Fahrenheit<<" Fahrenheit = "<<Kelvin<<" Kelvin";


return 0;
}
