#include <iostream>
#include <locale>

using namespace std;
int main(int argc, char** argv){
	setlocale(LC_ALL,"Portuguese");

	int escola[10][5];
	int cont;
	
	for (int i=0; i<10; i++){
		cout<<"Digite o RA do aluno "<<i+1<<endl;
		cin>>escola[i][0];
		cout<<"Digite a primeira nota do aluno "<<i+1<<endl;
		cin>>escola[i][1];
		cout<<"Digite a segunda nota do aluno "<<i+1<<endl;
		cin>>escola[i][2];
		cout<<"Digite a terceira nota do aluno "<<i+1<<endl;
		cin>>escola[i][3];
		escola[i][4]=(escola[i][1]+escola[i][1]+escola[i][2])/3;
			if(escola[i][4]>=5) {
				cont=cont+1;
			}
		
		
		cout<<"=======================================\n";
		
	}
	
	for (int i=0; i<10; i++){
		cout<< escola[i][0]<<"|"<<escola[i][1]<<"|"<<escola[i][2]<<"|"<<escola[i][3]<<"|"<<escola[i][4]<<endl;
		cout<<"=============================\n";
		
	}
	
	cout<<cont<<"Alunos estão aprovados.\n";
	return 0;
}
