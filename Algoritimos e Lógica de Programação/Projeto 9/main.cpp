#include <iostream>
#include <locale>

using namespace std;
int main(int argc, char** argv){
	setlocale(LC_ALL,"Portuguese");
    int sequencia[4];
    
    
    cout<<"Digite o primeiro n�mero: \n";
    cin>>sequencia[0];
    
    cout<<"Digite o segundo n�mero: \n";
    cin>>sequencia[1];
    
    cout<<"Digite o terceiro n�mero: \n";
    cin>>sequencia[2];
    
    cout<<"Digite o quarto n�mero: \n";
    cin>>sequencia[3];
    
    cout<<"Digite o quinto n�mero: \n";
    cin>>sequencia[4];
    
    cout<<sequencia[4]<<sequencia[3]<<sequencia[2]<<sequencia[1]<<sequencia[0];

    return 0;
}
