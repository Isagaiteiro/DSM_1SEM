/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    int destino, t_viagem;
    float preco;
    
    cout<<"------------------------------------------\n";
    cout<<"------------------GUICHÊ------------------\n";
    cout<<"------------------------------------------\n";
    cout<<"Escolha o destino da viagem:\n";
    cout<<"1-Região Norte\n";
    cout<<"2-Região Nordeste\n";
    cout<<"3-Região Sudeste\n";
    cout<<"4-Região Sul\n";
    cin>>destino;
    cout<<"Escolha o tipo de passagem q deseja:\n";
    cout<<"1-Ida\n";
    cout<<"2-Ida e Volta\n";
    cin>>t_viagem;
    
    switch(destino) {
        case 1: 
            if (t_viagem==1) {
                preco=500.00;
            } else {
                preco=900.00;
            };
        break;
        case 2:
           if (t_viagem==1) {
               preco=350.00;
           } else {
               preco=650.00;
           }
        break;
        case 3:
             if (t_viagem==1) {
               preco=350.00;
           } else {
               preco=600.00;
           }
        break;
        case 4:
            if (t_viagem==1) {
               preco=300.00;
           } else {
               preco=550.00;
           }
        break;
    }
    
    cout<<"Sua passagem custa R$"<<preco<<".";
    
    return 0;
}
