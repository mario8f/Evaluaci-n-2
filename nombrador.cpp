#include<iostream>
/*Un programa que lea y me devuelva la inicial*/

int main(){
    char palabra[10];
    char salir;
    int cont;
    int longitud; 
    longitud=0;//inicializo la variable
    std::cout<<"dime tu nombre ";
    std::cin >> palabra;
    
    //DIRTY TRICK
    for (cont=0;palabra[cont]!='\0';cont++){
        std::cout<<palabra[cont];
        longitud++;
        
    }
     std::cout<<"\nTe llamas ";
     std::cout<<palabra;
    //std::cout<<"\nLa primera letra de tu nombre es la";
    //std::cout<<palabra[0];
    std::cout<<"\nANIMADORA:\n";
    for(cont=0;palabra[cont]!='\0';cont++){
      std::cout<<cont; 
      std::cout<<" " ;                      
      std::cout<<palabra[cont];
      std::cout<<'\n';
                     
    }
    //Contamos cuantas letras tiene tu lindo nombre
    
    
    std::cout<<"El nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene ";
    std::cout<< longitud;
    std::cout<<" letras";               
    std::cin >> salir;
    
}
