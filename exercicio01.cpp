#include<iostream>

int main(){

    int numeros[5];

    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o número: "<<i + 1<<" ";
        std::cin>>numeros[i];
    }

    std::cout<<"Exibir números: ";
    for(int i = 0; i < 5; i++){
        std::cout<<numeros[i]<<" ";
    }

    return 0;
}