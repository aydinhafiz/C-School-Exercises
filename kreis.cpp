#include <iostream>
#include <cmath>
using namespace std;

int main(){

double D;
double A;
double U;

cout<<"Durchmesser: ";
cin>> D;

 A=pow(D,2)*M_PI/4;

cout<<"flaeche: "<<A<<endl;

 U=D*M_PI;

cout<<"Umfang: "<<U;

return 0;
}

