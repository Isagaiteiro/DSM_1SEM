#include <iostream>
#include <locale>


using namespace std;
int main() {
	setlocale (LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	char decisao='s';
	
	while(decisao=='s' || decisao=='S'){
		cout << "Testando tri�ngulos \n";
		cout << "Informe o primeiro lado: " <<endl;
		cin >> lado1;
		cout << "Informe o segundo lado: "<<endl;
		cin >> lado2;
		cout << "Informe o terceiro lado: "<<endl;
		cin >> lado3;
		
		
		if (lado1 > lado2+lado3 || lado2 > lado1+lado3 || lado3 > lado1+lado2 ){
			cout << "Esse n�o � um tri�ngulo."<< endl;
		} else
			if (lado1==lado2 && lado2==lado3) {
				cout << "Esse � um tri�ngulo equil�tero."<< endl;
			} else
		//&& == and == e
				if ( lado1==lado2 or lado2==lado3 || lado3==lado1) {
					cout << "Esse � um tri�ngulo is�scele." << endl;
							// ||== or == ou
				} else 
					if (lado1!=lado2 and lado2!=lado3 and lado3!=lado1) {
					cout << "Esse � um tri�ngulo escaleno. \n";
					}
					
		cout<<"Deseja calcular novamente (s) ou (n)? \n";
		cin>> decisao;
		
	} 
	return 0;
}
