#include <iostream>
#include <locale>
using namespace std;


// Projeto Corrida
int main() {
	setlocale(LC_ALL, "portuguese");
	int tempo=0, soma=0, melhor_tempo=9999, pior_tempo=0, volta, n;
	float media=0;
	
	cout<<"Informe a quantidade de voltas: \n";
	cin>>n;
	
	for (int v=1; v<=n; v++){
		cout<<"Informe o tempo da volta "<< v << endl;
		cin>>tempo;
		//acumulador
		soma= soma+tempo;
		
		if (tempo < melhor_tempo){
			melhor_tempo = tempo;
			//guarda a volta do melhor tempo
			volta=v;
		}
		
		if (tempo > pior_tempo){
			pior_tempo = tempo;
		}
	}
	
	media = soma/n;
	cout<< "A média das voltas é "<< media << endl;
	cout<< "A melhor volta foi a "<< volta << endl;
	cout<< "O melhor tempo de "<< melhor_tempo << endl;
	cout<< "O pior tempo de "<< pior_tempo << endl;
	
	
	return 0;
}
