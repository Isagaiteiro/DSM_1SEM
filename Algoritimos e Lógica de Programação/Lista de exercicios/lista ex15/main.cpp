#include <iostream>
#include <math.h>

using namespace  std;

void perfect(int n){
	int i,div, soma = 0;
	
	for(i = 1; i < n; i++){
		div = n % i;
		if(div == 0){
			soma = soma + i;
		}
	}
	
	if(soma == n){
		cout << "O número " << n <<" é perfeito";
	}
	
	if(soma != n){
		cout << "O número " << n << " não é perfeito";
	}
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Digite um número: ";
	cin >> n;
	
	perfect(n);
	
	return 0;
}