//Programa agenda
#include<iostream>
#include<fstream>
using namespace std;

int main(){
  char otro='s';
  string nombre;
  string apellido1;
  string apellido2;
  string numero;
  int edad;
  float peso;
  float altura;
  ofstream agenda("ficheroAgenda.txt");
  while(otro=='s'){
    cout<<"Nombre: ";  
    cin>>nombre;
    cout<<"Primer apellido: ";  
    cin>>apellido1; 
    cout<<"Segundo apellido: ";  
    cin>>apellido2;               
    cout<<"Numero: ";
    cin>>numero;
    cout<<"Edad: ";
    cin>>edad;
    cout<<"Altura: ";
    cin>>altura;
        if(altura>1.75){
             cout<<"Eres muy alto!!"<<endl;
        }
        else{
             cout<<"Tienes que crecer mas"<<endl;
        }
    cout<<"Peso: "<<endl;
    cin>>peso;
        if(peso>80){
             cout<<"Necesitas hacer mas ejercicio..."<<endl;
        }
        else{
             cout<<"Estas en plena forma!!"<<endl;
        }
    agenda<<nombre<<","<<numero<<endl;
    cout<<"Deseas introducir otro amigo (s/n)?: ";
    cin>>otro;
  }
  return 0;
}
