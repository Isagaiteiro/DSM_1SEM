#include <iostream>
#include <locale>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	float saldo=0, saque, deposito;
	int resp;
	char resp2='s';
	do{
		cout<<"----------Menu----------\n";
		cout<<"1-Depósito\n";
		cout<<"2-Retirada\n";
		cout<<"3-Saldo\n";
		cout<<"------------------------\n";
		cout<<"Escolha uma opição:"<<endl;
		cin>>resp;
		
	
		switch (resp) {
			case 1: 
				cout<<"Digite o valor que deseja depositar: \n";
				cin>> deposito; 
				saldo=deposito+saldo;
				cout<<"Você depositou R$"<<deposito<<endl;
				break;
			
			case 2:
				cout<<"Digite o valor que deseja sacar: "<<endl;
				cin>>saque;
				if (saldo>=saque) {
					cout<<"Você sacou R$"<<saque<<endl;	
					saldo=saldo-saque;
				} else {
					cout<<"Valor isuficiente, seu saldo é de R$"<<saldo<<endl;
				}
				break;
			case 3:
				cout<<"Seu saldo é R$"<<saldo<<endl;
				break;
		}
		cout<<"Deseja realizar uma nova operação? (s) ou (n) \n";
		cin>>resp2;
	}
	while (resp2=='s'); 
	
	cout<<"Operação encerrada, insira seu cartão para começar novamente!";
	
	return 0;
}
