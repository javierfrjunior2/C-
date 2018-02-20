#include<stdio.h>
#include<stdlib.h>//malloc
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[1]!='\0'){
            l++;
    }
    return l;
}
int main(){
    int salir;
    char *lista[5];
    char aux[15];
    int cont;
    int l;
    for(cont=0;cont<5;cont++){
        printf("\nNombre amigo %i:",cont);
        scanf("%s",aux); // aux 15 letras y guarda la palabra
        l=15; //l=medida(aux)
        lista[cont]=(char *)malloc(l*sizeof(char));
        strcpy(lista[cont],aux); //te lo copia
    }
    for(cont=0;cont<5;cont++){
        printf("\n%s",lista[cont]);
    }
    printf("\nToca cualquier letra:");
    scanf("%i",salir);
}

