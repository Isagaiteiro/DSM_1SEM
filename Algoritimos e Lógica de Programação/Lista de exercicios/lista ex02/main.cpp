#include <iostream>
#include <locale>
using namespace std;

// A  padaria  Hotp�o  vende  uma  certa  quantidade  de  p�es  franceses  e  uma  quantidade  
//debroas  a  cada  dia.  Cada  p�ozinho  custa  R$  0,12  e  a  broa  custa  R$  1,50.  
//Ao  final  do  dia,o  dono  quer  saber  quanto  arrecadou  com  a  venda  dos  p�es  e  broas  
//(juntos),  e  quantodeve  guardar  numa  conta  de  poupan�a  (10%  do  total  arrecadado). 
//Voc�  foi  contratadopara  fazer  os  c�lculos  para  o  dono.  Com  base  nestes  fatos,  
//fa�a  um  algoritmo  para  leras quantidades de p�es e de broas, e depois calcular os dados 
//solicitados.

int main() {
	setlocale (LC_ALL,"Portuguese");
	float pao, broa, qnt_pao, qnt_broa;
	cout<<"Insira a quantidade de p�es vendidos:\n";
	cin>>qnt_pao;
	cout<<"Insira a quantidade de broas vendidas: \n";
	cin>>qnt_broa;
	pao=qnt_pao*0.12;
	broa=qnt_broa*1.50;
	cout<<"Hoje foram vendidos "<<qnt_pao<<" p�es e "<<qnt_broa<< " broas.\n";
	cout<<"Voc� arrecadou R$"<<pao+broa<<" hoje e deve guardar R$"<<(pao+broa)*0.10<<endl;
	
	return 0;
}
