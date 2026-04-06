#include<iostream>


int main(){

int numero, sucessor, antecessor;

     std::cout<<"Digite um numero inteiro: ";
     std::cin>>numero;
     
     antecessor = numero - 1;
     sucessor = numero + 1;
     
     std::cout<<"O numero digitado foi: "<<numero<<std::endl;
     std::cout<<"O antecessor do numero digitado e: "<<antecessor<<std::endl;
     std::cout<<"O sucessor do numero digitado e: "<<sucessor<<std::endl;
     


     
     
     return 0;
}


