#include <iostream>
using namespace std; // preluam cele necesare
//definim functia
int main(){

    int a,c=0,b=50; //definim numerele intregi a, b, c unde c=0 si b=50
    cout<<"Introdu un numar:"; //cerem operatorului un numar
    cin>>a; // citim numarul ca fiind a
    if(a<100){//daca a este mai mic decat 100
        while(b!=a){ // atat timp b nu este egal cu a
                if (b<a){ //daca b este mai mic decat a
                    b++; // crestem valoarea lui b cu o unitatea
                    c++; // crestem valoarea lui c cu o unitate
                }
                else{ // daca b nu este mai mic decat a
                    b--; // scadem lui b o unitate
                    c++; // crestem lui c o unitate
                }

       }
    }

    cout<<b<<" este numaru introdus ? "<<c<<" incercari"<<endl; // afisam rezultatul incercarilor
}
