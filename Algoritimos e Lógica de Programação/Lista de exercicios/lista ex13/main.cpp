#include <iostream>
	#include <locale>
	#include <math.h>

	using namespace  std;
	
	float vol(float raio){
		float v = (1.333)*(3.14159)*(raio*raio*raio);
		
		return v;
	}

	int main(int argc, char** argv) {	
	
	float raio;
	
	cout << "Digite o raio da esfera:";
	cin >> raio;
	

	
	
	cout << "O volume da esfera é: " << vol(raio);
	
	
	
	
	return 0;
	
	};	