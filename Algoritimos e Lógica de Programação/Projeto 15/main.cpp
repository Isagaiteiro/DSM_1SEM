/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char ** argv){
    setlocale (LC_ALL,"portuguese");
    
    int tipo; 
    float dados[100], total;
    string escolha;
    
    do {
        cout<<"==================================\n";
        cout<<"------------Calculadora-----------\n";
        cout<<"==================================\n";
        cout<<"Escolha o tipo de calculo:\n";
        cout<<"1-Adição \n";
        cout<<"2-Subtração \n";
        cout<<"3-Multiplicação \n";
        cout<<"4-Divisão \n";
        cout<<"==================================\n";
        cin>>tipo;
        
        switch (tipo){
            case 1:
                cout<<"Escolha o primeiro número da soma: \n";    
                cin>>dados[1];
                cout<<"Escolha o segundo número da soma: \n";
                cin>>dados[2];
                total=dados[1]+dados[2];
                cout<<dados[1]<<" + "<<dados[2]<<" = "<<total<<endl; 
                
                cout<<"==================================\n";
                break;
            
            case 2:
                cout<<"Escolha o primeiro número da subtração: \n";    
                cin>>dados[1];
                cout<<"Escolha o segundo número da subtração: \n";
                cin>>dados[2];
                total=dados[1]-dados[2];
                cout<<dados[1]<<" - "<<dados[2]<<" = "<<total<<endl;  
                cout<<"==================================\n";
                break;
                
            case 3:
                cout<<"Escolha o primeiro número da multiplicação: \n";    
                cin>>dados[1];
                cout<<"Escolha o segundo número da multiplicação: \n";
                cin>>dados[2];
                total=dados[1]*dados[2];
                cout<<dados[1]<<" * "<<dados[2]<<" = "<<total<<endl;  
                cout<<"==================================\n";
                break;
                
            case 4:
                cout<<"Escolha o primeiro número da divisão: \n";    
                cin>>dados[1];
                cout<<"Escolha o segundo número da divisão: \n";
                cin>>dados[2];
                total=dados [1]/dados[2];
                cout<<dados[1]<<" / "<<dados[2]<<" = "<<total<<endl;  
                cout<<"==================================\n";
                break;
        }
        
        cout<<"Digite (s) para fazer uma nova conta.\n";
        cout<<"Digite (n) para encerrar o programa.\n";
        cin>>escolha;
    
    } while (escolha=="s");
    
    return 0;
}
