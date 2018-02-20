//leer lineas
#include<iostream>
#include<fstream>

using namespace std;
      
int main(){
    ifstream fichero("mi bonito fichero.txt");
    string mensaje;
    int salir;
    cout<<"El texto dice: "<<endl;
    while(fichero.eof()!=1){
      getline(fichero,mensaje);
      if (fichero.eof()!=1){
        cout<< mensaje;
        cout<<endl;
        }
    }
    cin>>salir;
}
