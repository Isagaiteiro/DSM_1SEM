//Desenvolver um sistema para cadastar lista de convidados de uma festa junina.
//Os dados da lista devem ser armazenados em uma matriz, onde a quantidade de linhas é determinada pelo usuário.
//O sistema deve ter um menu onde o usuário tem as opções de: inserir um convidado, pesquisar um convidado, imprimir a lista de convidados e sair.
//Desenvolver um função que teste a quantidade de convidados na lista, se está cheia ou pode inserir mais convidados.
//Desenvolver uma função que teste se o prato já foi cadastrado, para que não tenha dois repitidos.

#include <iostream>

using namespace std;

//int x;
//string prato, lista [x][2];

void cardapio(){
    int x;
    string prato, lista[x][2];
    for (int i=0; i<x; i++) {
        if (lista[i][1]==prato){
            cout<<"O prato já está cadastrado.\n";
        }
   } 
}

int main(){
    int opc_menu, x, n=0, tipo_pesq;
    char opc_case1='s', retornar='s';
    string nome, prato, lista[x][2];
    
    
    cout<<"Digite a quantidade de convidados que terá na festa:\n";
    cin>>x;
    do {
        cout<<"---------Menu---------\n";
        cout<<"Escolha uma das opções abaixo: \n";
        cout<<"1.Inserir convidado.\n";
        cout<<"2.Pesquisar convidado.\n";
        cout<<"3.Imprimir lista de convidados.\n";
        cout<<"4.Sair.\n";
        cin>>opc_menu;
        
        switch (opc_menu){
            case 1:
                do {
                    if (n<x){
                        cout<<"Digite o nome do convidado: \n";
                        cin>>lista[n][0];
                        cout<<"Digite o prato que ele irá trazer:\n";
                        cin>>lista[n][1];
                        n++;
                        cout<<"Deseja adicionar mais um convidado? (s) ou (n)\n";
                        cin>>opc_case1;
                    } else {
                        cout<<"A lista de convidados já está cheia. \n";
                        opc_case1='n';
                    }
                    
                } while (opc_case1=='s');
                cout<<"Deseja retornar ao menu? (s) ou (n)\n";
                cin>>retornar;
            break;
            case 2:
                cout<<"Como deseja realizar a pesquisa:\n";
                cout<<"1.nome.\n";
                cout<<"2.prato.\n";
                cin>>tipo_pesq;
                if (tipo_pesq==1){
                    cout<<"Digite o nome que deseja pesquisar: \n";
                    cin>>nome;
                    for (int i=0; i<x; i++) {
                        if (lista[i][0]==nome){
                            cout<<"Esse convidado já está cadastrado.\n"; 
                            cout<<nome<<" trará "<<lista[i][1]<<".\n";
                        }
                    }
                    
                }
                //if (tipo_pesq==2){
                //    cout<<"Digite o prato que deseja pesquisar: \n";
                //    cin>>prato;
                //    for (int i=0; i<x; i++) {
                //        if (lista[i][1]==prato){
                //            cout<<"O prato já está cadastrado.\n";
                //        }
                //    } 
                //}
                cout<<"Deseja retornar ao menu? (s) ou (n)\n";
                cin>>retornar;
            break;
            case 3:
                cout<<"Nome   |   Prato   \n";
                for (int i=0; i<x; i++){
                    cout<<lista[i][0]<<" | "<<lista[i][1]<<endl;
                }
                cout<<"Deseja retornar ao menu? (s) ou (n)\n";
                cin>>retornar;
            break;
            case 4:
                cout<<"O programa será encerrado, obgigado por utilizar.\n";
            break;
        }
    } while (retornar=='s');
    cout<<"O programa será encerrado, obrigado por utilizar.\n";

    return 0;
}
