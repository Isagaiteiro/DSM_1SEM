#include <iostream>
#include <locale>
using namespace std;

//Uma  f�brica  de  camisetas  produz  os  tamanhos  pequeno,  m�dio  e  grande,  cada  uma sendo 
// vendida  respectivamente  por  10,  12  e  15  reais.  Construa  um  algoritmo  em  que  
//ousu�rio   forne�a   a   quantidade   de   camisetas   pequenas,   m�dias e   grandes   
//referentes   auma venda, e a m�quina informe quanto ser� o valor arrecadado
int main() {
	setlocale (LC_ALL,"Portuguese");
	int qnt_p, qnt_m, qnt_g,vlr_p, vlr_m, vlr_g, total;
	cout<<"Digite a quantidade de camisetas que deseja comprar: \n";
	cout<<"Tamanho P:\n";
	cin>>qnt_p;
	vlr_p=qnt_p*10;
	cout<<"Tamanho M:\n";
	cin>>qnt_m;
	vlr_m=qnt_m*12;
	cout<<"Tamanho G:\n";
	cin>>qnt_g;
	vlr_g=qnt_g*15;
	total= vlr_p+vlr_m+vlr_g;
	cout<<"O valor total do pedido � R$"<<total<<endl;
	return 0;
}
