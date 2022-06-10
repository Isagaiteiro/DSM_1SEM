#include <iostream>
#include <locale>

using namespace std;
int main(int argc, char** argv){
	
	setlocale(LC_ALL,"Portuguese");
	int vet[8]={2,3,4,7,9,12,15,17};
	int valor, achei=0, posicao;
	
	cout<<"Digite o primeiro número de 1 á 20: \n";
    cin>>valor;
	
	for (int i=0;i<7;i++){
		if (vet[i] == valor){
			achei = 1;
			posicao = i;
		}
	}

	if (achei == 0){
		cout << "Número não encontrado." << endl;
	}
	else{
		cout << "Número encontrado na posição " << posicao << endl;
	}
    return 0;
}
