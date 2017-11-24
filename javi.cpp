//Vamos aprender a hacer arrays
using namespace std;
/*Esto hace no repetir std siempre*/ /*Vamos a hacer un programa que guarde 5 numeros enteros*/
#include<iostream>

int main(){
    int salir;
    int cont;
    int javi[5];
/*Esto significa que en la memora se reservan 5 posiciones para 5 numeros*/
       for(cont=0;cont<5;cont++){
           cout<<"Dime un numero bombom";
           cin>>javi[cont];
       }
       cout<<"Mira mi bonito vector relleno: ";
       for(cont=0;cont<5;cont++){
           cout<<"javi["<<cont<<"]="<<javi[cont]<<endl;
/*<< se utiliza como las comas en python*/
     }
     cout<<"Toca cualquier tecla";
     cin>>salir;
}
