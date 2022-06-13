/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    int prato, sobremesa, bebida, refeicao, calorias;
    refeicao = 0;
    
    
    cout<<"----------------------------------------\n";
    cout<<"------------------Menu------------------\n";
    cout<<"----------------------------------------\n";
    cout<<"Escolha as opções de prato principal:\n";
    cout<<"1-Vegetariano\n";
    cout<<"2-Peixe\n";
    cout<<"3-Frango\n";
    cout<<"4-Carne\n";
    cin>>prato;
    switch(prato) {
        case 1: 
            refeicao=refeicao+180;
        break;
        case 2:
           refeicao=refeicao+230;
        break;
        case 3:
            refeicao=refeicao+250;
        break;
        case 4:
           refeicao=refeicao+350;
        break;
    }
    
    cout<<"Escolha as opções de sobremesa:\n";
    cout<<"1-Abacaxi\n";
    cout<<"2-Sorvete Diet\n";
    cout<<"3-Mousse Diet\n";
    cout<<"4-Mousse de Chocolate\n";
    cin>>sobremesa;
    switch(sobremesa) {
        case 1:
            refeicao=refeicao+75;
        break;
        case 2:
            refeicao=refeicao+110;
        break;
        case 3:
            refeicao=refeicao+170;
        break;
        case 4:
            refeicao=refeicao+200;
        break;
    }
    
    
    cout<<"Escolha as opções de bebida:\n";
    cout<<"1-Chá\n";
    cout<<"2-Suco de Laranja\n";
    cout<<"3-Suco de Melão\n";
    cout<<"4-Refrigerante Diet\n";
    cin>>bebida;
    switch(bebida) {
        case 1: 
            refeicao=refeicao+20;
        break;
        case 2:
            refeicao=refeicao+70;
        break;
        case 3:
            refeicao=refeicao+100;
        break;
        case 4:
            refeicao=refeicao+65;
        break;
    }
    
    cout<<"O seu prato tem no total "<<refeicao<<" calorias.";

    return 0;
}
