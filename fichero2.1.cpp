#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    ifstream fichero("Mi fichero bonito.txt");
    string mensaje;
    int salir;
    cout<<"El texto dice...:";
    for(int nlinea=1;nlinea<=4;nlinea++){
            getline(fichero,mensaje);
            cout<<mensaje;
            cout<<endl;
    }
    cin>>salir;
    
return 0;
}
