#include<iostream>
using namespace std;

int main(){
    struct persona{
        string nombre;
        int edad;
        char colorPelo;
    };
    int cont;
    int salir;
    persona amigo[3];
    for(cont=1;cont<3;cont++){
       cout<<"Datos del amigo "<<cont<<endl;
       cout<<"Como se llama tu amigo: ";
       cin>>amigo[cont].nombre;
       cout<<"Cuantos años tiene: ";
       cin>>amigo[cont].edad;
       cout<<"De que color es el pelo: ";
       cin>>amigo[cont].colorPelo;
    }
      cout<<"MIS AMIGOS SON: "<<endl;
   for(cont=0;cont<3;cont++){
      cout<<"Mi amigo "<<amigo[cont].nombre<<" tiene "<<amigo[cont].edad<<" y su pelo es de color "<<amigo[cont].colorPelo<<endl;                           
   }
    cout<<"Toca cualquier tecla para acabar";
    cin>>salir;
}
 
