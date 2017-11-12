#include <iostream>
using namespace std;//am cerut cele necesare
//definim functia de realocare
int main(){

    int a,b; //definim cele doua numere intregi
    cout<<"a= "; //cerem operatorului valoarea lui a
    cin>>a; //citim valoarea introdusa
    cout<<"b= "; // cerem operatorului valoarea lui b
    cin>>b; // citim valoarea introdusa

    a=a+b;
    b=a-b;
    a=a-b; // am aplicat regula de realocare a valorilor

    cout<<"Acum a= "<<a<<" si b= "<<b<<endl; //afisam cele doua noi valori
    return 0; //terminarea programului
}
