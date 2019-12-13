#include<iostream>
/*Vamos a hacer un programa que dibuje un bello cuadrado del tamaño que nos digael usuario*/

int main(){
    //Definicion de variables
    char salir;
    int num[4];
    int cont;
    float suma_numero;
    float media;
    //introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
      std::cout<<"introduce el numero ",cont,":";
      std::cin>> num[cont];
    }
    //Sacamos los numeros guardados
    std::cout<<"has metido los siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
      std::cout<<num[cont];
    }
    //Calculamos la media
    std::cout<<"MEDIA\n";
    suma_numero=0;
    for(cont=0;cont<=3;cont++){
       suma_numero=suma_numero+num[cont];//Suma acumulada
    }
    std::cout<<"La suma vale: ";
    std::cout<<suma_numero;
    std::cout<<"\n";
    media=suma_numero/4;
    std::cout<<"La media vale: ";
    std::cout<<media;
    //Mostramos la lista en orden inverso
    for(cont=3;cont<=0;cont--){
      std::cout<<num[cont];
    }
    
    std::cin>>salir;
}

