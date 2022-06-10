#include <iostream>
#include <locale>

using namespace std;
int main(int argc, char** argv){
	
setlocale(LC_ALL,"Portuguese");

    int n=0, m=0, x=0;
	int a[6];
	int b[6];
	int c[6];
	int valor;
	
	cout<<"Digite as 6 notas do 1° Semestre:\n";
	for (int i=0; i<=5; i++) {
    	cin>>a[n];
    	n++;
	};
	
	cout<<"Digite as 6 notas do 2° Semestre:\n";
	for (int i=0; i<=5; i++) {
    	cin>>b[m];
    	m++;
	};
	
	cout<<a[0]<<"-"<<a[1]<<"-"<<a[2]<<"-"<<a[3]<<"-"<<a[4]<<"-"<<a[5]<<endl;
	cout<<b[0]<<"-"<<b[1]<<"-"<<b[2]<<"-"<<b[3]<<"-"<<b[4]<<"-"<<b[5]<<endl;
	
	for (int i=0; i<=5; i++) {
    	c[x]=a[x]+b[x];
    	x++;
	};
	cout<<c[0]<<"-"<<c[1]<<"-"<<c[2]<<"-"<<c[3]<<"-"<<c[4]<<"-"<<c[5]<<endl;

	
    return 0;
}
