#include<iostream>
/*Un programa que lea una palabra y sustituya las vocales por 'u'*/
int devuelve_longitud(char palabra[]){
    int longitud=0;//variable acumuladora
    int cont=0;
    while(palabra[cont]!='\0'){
          longitud++;
          cont++;
    }
    return(longitud);
}

int main(){
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    char salir;                                                                                                                                                                                                                                 
    int cont,nvocales,nconsonantes;
    int cont2=0;
    int longitud=0;
    
    std::cout<<"Escriba una palabra ";
    std::cin>>palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){
     for(nvocales=0;nvocales<5;nvocales++){
      if(palabra[cont]==vocales[nvocales]){ 
           cont2++;    
      }
     }
    }
    
    std::cout<<devuelve_longitud(palabra)- cont2;
    std::cin>>salir;
    
    
}
    
