#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int inicial, final;
	setlocale (LC_ALL, "Portuguese");
	cout<<"Digite o número inicial do intervalo: \n";
	cin>> inicial;
	cout<<"Digite o número final do intervalo \n";
	cin>> final;
	
	for(int n=inicial; n<=final ; n++){
		//cout<< n <<endl;
		if (n%2==0){
			cout<< n<<" é par. \n";	
		}
	}
	
	return 0;
}
