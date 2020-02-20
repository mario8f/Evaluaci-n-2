#include<iostream>
/*Esto es un programa que transforma los dolares en euros*/

int main(){
    float dolares,euros;
    char salir;
    std::cout<<"Escribe una cantidad en dolares: ";
    std::cin>>dolares;
    std::cout<<"euros: ";
    std::cout<< dolares*1.09;
    
    std::cin>>salir;
}
