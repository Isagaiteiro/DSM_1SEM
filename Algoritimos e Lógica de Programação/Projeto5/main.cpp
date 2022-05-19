#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int tabuada, conta;
	
	cout<<"Digite a tábuada que você deseja: \n";
	cin>>tabuada;
	for (int n=1; n<=10; n++){
		conta=n*tabuada;
		cout<< tabuada << "x" << n << "=" << conta << endl;	
		//cout<< tabuada << "x" << n << "=" << n*tabuada << endl;	
	} 
	

	
	
	
	return 0;
	
}
