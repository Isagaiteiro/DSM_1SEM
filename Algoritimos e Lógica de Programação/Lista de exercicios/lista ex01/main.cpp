#include <iostream>
#include <locale>
using namespace std;
//Fa�a  um  algoritmo  para  calcular  quantas  ferraduras  s�o  necess�rias  para  equipar  
//todos os cavalos comprados para um haras.

int main() {
	setlocale (LC_ALL,"Portuguese");
	int cavalos, ferraduras;
	
	cout<<"Isira a quantidade de cavalos: \n";
	cin>>cavalos;
	ferraduras=cavalos*4;
	cout<<"Voc� vai precisar de "<<ferraduras<<" ferraduras. \n";
	return 0;
}
