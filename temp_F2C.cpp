#include <iostream>
#include <cmath>

using namespace std;

int main (){

double Fahrenheit;
double Celsius;


cout<<"Fahrenheit in Celsius umrechnen"<<endl;
cout<<"Temp. in Fahrenheit: ";
cin>> Fahrenheit;

Celsius = 5.0/9.0 * (Fahrenheit - 32.0) ;

cout<<Fahrenheit<<" Fahrenheit = "<<Celsius<<" Celsius";


return 0;
}
