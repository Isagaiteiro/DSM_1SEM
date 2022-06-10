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
    float a, b,c, total;
    string escolha, escolha2, escolha3;
    
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
                cout<<"Escolha o primeiro número: \n";    
                cin>>a;
                cout<<"Escolha o segundo número: \n";
                cin>>  b;
                total=a+b;
                cout<<a<<" + "<<b<<" = "<<total<<endl;
                cout<<"Deseja somar mais números?\n";
                cin>>escolha2;
                if (escolha2=="s"){
                    do {
                        cout<<total<<" + ";
                        cin>>c;
                        total=total+c;
                        cout<<total<<endl;
                        cout<<"Adicionar mais um número?\n";
                        cin>>escolha3;
                    } while (escolha3=="s");
                }
                cout<<"==================================\n";
                break;
            
            case 2:
                cout<<"Escolha o primeiro número da subtração: \n";    
                cin>>a;
                cout<<"Escolha o segundo número da subtração: \n";
                cin>>b;
                total=a-b;
                cout<<a<<" - "<<b<<" = "<<total<<endl;  
                cout<<"Deseja subtrair mais números?\n";
                cin>>escolha2;
                if (escolha2=="s"){
                    do {
                        cout<<total<<" - ";
                        cin>>c;
                        total=total-c;
                        cout<<total<<endl;
                        cout<<"Subtrair mais um número?\n";
                        cin>>escolha3;
                    } while (escolha3=="s");
                }
                cout<<"==================================\n";
                break;
                
            case 3:
                cout<<"Escolha o primeiro número da multiplicação: \n";    
                cin>>a;
                cout<<"Escolha o segundo número da multiplicação: \n";
                cin>>b;
                total=a*b;
                cout<<a<<" * "<<b<<" = "<<total<<endl;  
                cout<<"Deseja multiplicar mais números?\n";
                cin>>escolha2;
                if (escolha2=="s"){
                    do {
                        cout<<total<<" * ";
                        cin>>c;
                        total=total*c;
                        cout<<total<<endl;
                        cout<<"Multiplicar mais um número?\n";
                        cin>>escolha3;
                    } while (escolha3=="s");
                }
                cout<<"==================================\n";
                break;
                
            case 4:
                cout<<"Escolha o primeiro número da divisão: \n";    
                cin>>a;
                cout<<"Escolha o segundo número da divisão: \n";
                cin>>b;
                total=a/b;
                cout<<a<<" / "<<b<<" = "<<total<<endl; 
                cout<<"Deseja dividir por mais números?\n";
                cin>>escolha2;
                if (escolha2=="s"){
                    do {
                        cout<<total<<" / ";
                        cin>>c;
                        total=total/c;
                        cout<<total<<endl;
                        cout<<"Dividir por mais um número?\n";
                        cin>>escolha3;
                    } while (escolha3=="s");
                }
                cout<<"==================================\n";
                break;
        }
        
        cout<<"Digite (s) para fazer uma nova conta.\n";
        cout<<"Digite (n) para encerrar o programa.\n";
        cin>>escolha;
    
    } while (escolha=="s");
    cout<<"===========================================================\n";
    cout<<"-----------------------------------------------------------\n";
    cout<<"Tudo bem, nos vemos de novo em seus próximos cálculos...\n";
    cout<<"-----------------------------------------------------------\n";
    cout<<"===========================================================\n";
        
    return 0;
}
