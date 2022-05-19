#include <iostream>
#include <locale>


using namespace std;
int main() {
	setlocale (LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	char decisao='s';
	
	while(decisao=='s' || decisao=='S'){
		cout << "Testando triângulos \n";
		cout << "Informe o primeiro lado: " <<endl;
		cin >> lado1;
		cout << "Informe o segundo lado: "<<endl;
		cin >> lado2;
		cout << "Informe o terceiro lado: "<<endl;
		cin >> lado3;
		
		
		if (lado1 > lado2+lado3 || lado2 > lado1+lado3 || lado3 > lado1+lado2 ){
			cout << "Esse não é um triângulo."<< endl;
		} else
			if (lado1==lado2 && lado2==lado3) {
				cout << "Esse é um triângulo equilátero."<< endl;
			} else
		//&& == and == e
				if ( lado1==lado2 or lado2==lado3 || lado3==lado1) {
					cout << "Esse é um triângulo isóscele." << endl;
							// ||== or == ou
				} else 
					if (lado1!=lado2 and lado2!=lado3 and lado3!=lado1) {
					cout << "Esse é um triângulo escaleno. \n";
					}
					
		cout<<"Deseja calcular novamente (s) ou (n)? \n";
		cin>> decisao;
		
	} 
	return 0;
}
