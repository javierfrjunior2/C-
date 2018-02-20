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
    int nveces;
    char *pauxiliar;
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
    //Ordenamiento
     for(cont=0;cont<5;cont++){
         if(*lista[0]>*lista[cont+1]){
         printf("\nCambio %s por %s");
         pauxiliar=lista[cont];
         lista[cont]=lista[cont+1];
         lista[cont+1]=pauxiliar;
         }
     }
     //Despues del ordenamiento
     printf("\n\n Lista ordenada: ");
     for(cont=0;cont<5;cont++){
        printf("\n%s",lista[cont]);
     }
    printf("\nToca cualquier letra:");
    scanf("%i",salir);
}

