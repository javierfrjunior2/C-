#include<iostream>
using namespace std;

int main(){
    struct persona{
        string nombre;
        int edad;
        char colorPelo;
    };
    persona amigo1;
    persona amigo2;
    persona amigo3;
    cout<<"Como se llama tu amigo: ";
    cin>>amigo1.nombre;
    cout<<"Cuantos años tienes: ";
    cin>>amigo1.edad;
    cout<<"De que colr es el pelo: ";
    cin>>amigo1.colorPelo;
}
