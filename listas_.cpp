#include<stdio.h>
#include<stdlib.h>//malloc
int main(){
    int salir;
    char *lista[3];
    lista[0]=(char *) malloc(8*sizeof(char));// 1 letra 1 byte
    lista[1]=(char *) malloc(7*sizeof(char));
    lista[2]=(char *) malloc(9*sizeof(char));
    printf("\n Primer rey mago :");//n\ retorno de carro y %s leer memoria
    scanf("%s",lista[0]);
    printf("\n Segundo rey mago :");
    scanf("%s",lista[1]);
    printf("\n Tercer rey mago :");
    scanf("%s",lista[2]);
    printf("%s , ", lista[0]);
    printf("%s , ", lista[1]);
    printf("%s , ", lista[2]);
    scanf("%i",&salir);
}

