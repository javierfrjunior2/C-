#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    int salir;
    string linea;
    string nombre;
    int repetir=0;
    cout<<"Dime la ruta de tu fichero";
    getline(cin,nombre);
       ifstream fichero(nombre.c_str());
    do{
       if(fichero.fail()==1){
            cout<<"ERROR. No existe la ruta";
            cout<<"Dime la ruta de tu fichero";
                repetir==1;
    }
    }while(repetir==1);
    while(fichero.eof()==0){
            getline(fichero,linea);
            cout<<"Dime la ruta de tu fichero";
            getline(fichero,linea);
            cout<<linea;
    }
    fichero.close();
    cin>>salir;
    return 0;
}
