#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale (LC_ALL,"Portuguese");
    
    int a[9]={1,2,3,15,6,7,8,9,8};
    int b[9]={7,4,1,8,10,2,9,6,3};
    int soma=0, somab=0, c[9], d[9], escalar, somae=0;
    
    cout<<"Lista 1: \n";
    for (int i=0; i<=8; i++) {
        cout<<a[i]<<" | ";
    }
    cout<<"\n========================================\n";
    
    cout<<"\nLista 2: \n";
    for (int i=0; i<=8; i++) {
        cout<<b[i]<<" | ";
    }
    cout<<"\n========================================\n";
    
    cout<<"\nSoma dos elementos da lista 1: \n";
    for (int i=0; i<=8; i++) {
        soma=soma+a[i];
       
    }
    cout<<soma<<endl;
    cout<<"========================================\n";
    
    cout<<"\nSoma dos elementos da lista 2: \n";
    for (int i=0; i<=8; i++) {
        somab=somab+b[i];
       
    }
    cout<<somab<<endl;
    cout<<"========================================\n";
    
    cout<<"Soma da lista 1 e lista2: \n";
    for(int i=0;i<=8;i++){
        c[i]=a[i]+b[i];
        cout<<c[i]<<" | ";
    }
    cout<<"\n========================================\n";
    
    cout<<"Subtração da lista 1 e lista2: \n";
    for(int i=0;i<=8;i++){
        d[i]=a[i]-b[i];
        cout<<d[i]<<" | ";
    }
    cout<<"\n========================================\n";
    
    cout<<"Produto escalar das listas 1 e 2: \n";
    for(int i=0;i<=8;i++){
        escalar=a[i]*b[i];
        somae=somae+escalar;
        cout<<somae<<" | ";
   
    }
    return 0;
}
