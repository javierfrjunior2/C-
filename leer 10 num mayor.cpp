/*Este programa sirve para leer 10 numeros enteros y te devuelve el numero mayor*/
#include<iostream>
int main(){
    //Definicion de variables
    int cont;
    int mayor;
    int numero;
    int salir;
    /*Bucle tipo for*/
    //for(cont=10,cont>=0;cont--
    mayor=0;
    for(cont=1;cont<=10;cont=cont+1){
        std::cout<<"Dime un numero entero>>";
        std::cin>>numero;
        if(numero>mayor){
            mayor=numero;
        }
    }
    std::cout<<"El mayor:"<<mayor;
    std::cout<<"Toca cualquier tecla";
    std::cin>>salir;
    return 0;
}
