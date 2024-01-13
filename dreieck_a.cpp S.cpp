#include <iostream>
#include <cmath>

using namespace std;

int main (){

double GS;
double H;
double F;

cout<<"Geben sie wert von Grundseite: ";
cin>>GS;
cout<<"Geben sie wert von Hohe: ";
cin>>H;

F= 1/2+GS*H;

cout<<"Flaeche von Dreieck ist: "<<F<<endl <<endl   ;

double grundSeite;
double flaeche;
double hohe;

cout<<"Geben sie wert von Grundseite: ";
cin>>grundSeite;
cout<<"Geben sie wert von Flaeche: ";
cin>>flaeche;

hohe=(2*flaeche)/grundSeite;

cout<<"Hohe: "<<hohe;

return 0;
}
