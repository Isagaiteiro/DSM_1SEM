#include <iostream>
#include <locale>

using namespace std;
int main(int argc, char** argv){
	
	setlocale(LC_ALL,"Portuguese");
	int vet[8]={2,3,4,7,9,12,15,17};
	int valor, achei=0, posicao;
	
	cout<<"Digite o primeiro n�mero de 1 � 20: \n";
    cin>>valor;
	
	for (int i=0;i<7;i++){
		if (vet[i] == valor){
			achei = 1;
			posicao = i;
		}
	}

	if (achei == 0){
		cout << "N�mero n�o encontrado." << endl;
	}
	else{
		cout << "N�mero encontrado na posi��o " << posicao << endl;
	}
    return 0;
}
