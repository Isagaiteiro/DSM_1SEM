#include <iostream>
#include <locale>

using namespace std;
void lista_prod(string produtos[4]);
void texto();
int soma(int valor[4]);

int main(){
    setlocale (LC_ALL,"Portuguese");
    string produtos[4]={"Bolacha", "Salgadinho","Bala","Água"};
    int valor[4];
    
    
    cout<<"\n             Mercearia             \n";
    lista_prod(produtos);
    texto();
    
    for (int i=0; i<4;i++){
        cout<<"\nDigite o valor do produto "<< produtos[i]<<". \n";
        cin>>valor[i];
    }
    cout<<"Você tem R$"<< soma(valor)<<" no estoque.\n";
    
    return 0;
}

void lista_prod(string produtos[4]){
    cout<<endl;
    for (int i=0; i<4; i++){
        cout<<produtos[i]<< " | ";
    }
}

void texto(){
    cout<<"Ensira o valor de cada produto.\n";
}

int soma(int valor[4]){
    return valor[0]+valor[1]+valor[2]+valor[3];
    
}
