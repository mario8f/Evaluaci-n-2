#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<mis_funciones.h>



int main(){
    char *palabras[4];
    char *paux;
    int cont;
    char salir;
    char aux[20];
    int longitud;
    int veces;
    //Leo cuatro palabras
    for(cont=0;cont<4;cont++){
        std::cout<<"palabra: "<<cont+1<<" ";
        std::cin>>aux;
        longitud=devuelve_longitud(aux);
        std::cout<<longitud<<"\n";
        //std::cout<<longitud<<"\n";
        palabras[cont]=(char *) malloc(longitud*sizeof(char));//Reserva
        strcpy(palabras[cont],aux);
    
    }
    std::cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
        printf("%s\n",palabras[cont]);
    }
    //ORDENAMOS POR EL METODO DE LA BURBUJA
    for(veces=1;veces<4;veces++){
       for(cont=0;cont<3;cont++){
          if(strcmp(palabras[cont],palabras[cont+1])>0){
             paux=palabras[cont];
             palabras[cont]=palabras[cont+1];
             palabras[cont+1]=paux;                                        
             }
          }
       }
       std::cout<<"\nLISTA DE PALABRAS ORDENADAS\n";
       for(cont=0;cont<4;cont++){
           printf("%s\n",palabras[cont]);
       }
       std::cin>>salir;
}
