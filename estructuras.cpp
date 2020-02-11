#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char salir;
    struct Amigo{
           int n_amigo;
           float money;

    };
    int cont;
    Amigo misAmigos[3];
    for(cont=0;cont<
    3;cont++){
        std::cout<<"Dime tu numero, pepito: ";
        std::cin>>misAmigos[cont].n_amigo;
        std::cout<<"Dime cuanro sexo mantines: ";
        std::cin>>misAmigos[cont].money;
    }
    //Recupero los datos de mi Amigo
    for(cont=0;cont<3;cont++){
        std::cout<<"Yo tengo un amigue que se llama pepito";
        std::cout<<"nPepito es mi amigo nº: "<<misAmigos[cont].n_amigo;
        std::cout<<"\n Y tienes: "<<misAmigos[cont].money<<" euros.";
    }
    
    std::cin>>salir;
}
