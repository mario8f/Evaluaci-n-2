#include <iostream>


int main(){
    char salir;
    int dia;
    int contador;
    std::cout<<"Introduzca un numero: ";
    std::cin>>dia;
    
    while(dia<=0){
                  std::cout<<"Introduzca otro numero: ";
                  std::cin>>dia;
    }
    
    while(dia>7){
            std::cout<<"Introduzca otro numero : ";
            std::cin>>dia;        
    }
    
    std::cout<<"dia de la semana : ";
    
    if (dia==1){
       std::cout<<"lunes.";
    }
    
    if (dia==2){
                std::cout<<"martes.";
    }
    
    if (dia==3){
                std::cout<<"miercoles.";
    }
    
    if (dia==4){
                std::cout<<"jueves.";
    }
    
    if (dia==5){
                std::cout<<"viernes.";
    }
    
    if (dia==6){
                std::cout<<"sabado.";
    }
    
    if (dia==7){
                std::cout<<"domingo.";
    }
    
    std::cin>>salir;
}
