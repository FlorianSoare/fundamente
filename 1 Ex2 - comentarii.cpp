#include <iostream>
using namespace std; //am selectat cele necesare

int main(){

    int a,l,z,o; // definim numerele intregi a, l, z, o
    cout<<"Introdu un numar de ani: "; //afisam mesajul prin care cerem cifra anilor
    cin>>a; // citim cifra anilor introdusa de operator
    l=a*12; // calculam lunile din cifra anilor
    z=a*365; //calculam zilele din cifra lunilor
    o=z*24; // calculam orele din cifra zilelor

    cout <<"In "<<a<<" ani avem "<<l<<" luni, sau "<<z<<" zile, sau "<<o<<" ore."<<endl; // afisam rezultat

    return 0; // final proces
}
