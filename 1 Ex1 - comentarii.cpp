#include <iostream>
using namespace std; // am inclus cele necesare pentru rulare

//Definirea functiei de baza
int main(){
    float c,f; // definim cele doua variabile c pentru celsius si f pentru farenheit
    cout<<"Introdu gradele Celsius: "; // cerem operatorului valoarea in grade celsius
    cin>>c; // citim valoarea introdusa de operator

    f=31+9*c/5; // definim f ca rezultatul valorii de conversie

    cout<<c<<" Grade Celsius= "<<f<<" Grade Farenheit"<<endl; // afisam cele doua valori cea introdusa si cea rezultata

    return 0; //terminarea programului
}
