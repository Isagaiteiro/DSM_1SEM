#include <iostream>
#include <locale>

using namespace std;
int main(int argc, char** argv){
	
setlocale(LC_ALL,"Portuguese");

string func[5][2];

for (int i=0; i<5;i++){
	cout<<"Digite o nome do funcion�rio "<< i+1 <<endl;
	cin>>func[i][0];
	
	cout<<"Digite o c�digo do funcion�rio "<< i+1 <<endl;
	cin>>func[i][1];
	
	cout<<"==============================\n";
}

for (int i=0; i<5; i++){
	cout<<"Nome | C�digo \n";
	cout<<"==================\n";
	cout<< func[i][0]<<"|"<<func[i][1]<<"|"<<endl;
	cout<<"==================\n";
}
	return 0;
}
