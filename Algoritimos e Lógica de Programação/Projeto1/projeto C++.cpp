#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Declarando vari�veis
	string nome;
	int idade;
	float media;
	bool status;
	
	//escrevendo um texto na tela
	cout<< "Informa seu nome \n"; //o operador aponta pra onde ele vai guardar o valor.
	//lendo o nome digitado no teclado
	cin >> nome;
	
	cout << "Informe sua idade \n";
	cin >> idade;
	
	//exibindo valores concatenados
	cout << "Ol�, " << nome << "!! \n";
	cout << "Sua idade �:" << idade << "\n";
	 
	//Estrutura condicional
	if (idade>=18) {
		cout << "Voc� � maior de idade. \n";
	} else {
		cout << "Voc� n�o � maior de idade. \n";
	}
	
	return 0;
}
