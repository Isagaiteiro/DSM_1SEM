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
		cout<<"1-Dep�sito\n";
		cout<<"2-Retirada\n";
		cout<<"3-Saldo\n";
		cout<<"------------------------\n";
		cout<<"Escolha uma opi��o:"<<endl;
		cin>>resp;
		
	
		switch (resp) {
			case 1: 
				cout<<"Digite o valor que deseja depositar: \n";
				cin>> deposito; 
				saldo=deposito+saldo;
				cout<<"Voc� depositou R$"<<deposito<<endl;
				break;
			
			case 2:
				cout<<"Digite o valor que deseja sacar: "<<endl;
				cin>>saque;
				if (saldo>=saque) {
					cout<<"Voc� sacou R$"<<saque<<endl;	
					saldo=saldo-saque;
				} else {
					cout<<"Valor isuficiente, seu saldo � de R$"<<saldo<<endl;
				}
				break;
			case 3:
				cout<<"Seu saldo � R$"<<saldo<<endl;
				break;
		}
		cout<<"Deseja realizar uma nova opera��o? (s) ou (n) \n";
		cin>>resp2;
	}
	while (resp2=='s'); 
	
	cout<<"Opera��o encerrada, insira seu cart�o para come�ar novamente!";
	
	return 0;
}
