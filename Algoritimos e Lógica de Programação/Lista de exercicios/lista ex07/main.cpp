#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale (LC_ALL,"Portuguese");
    
    int n1=0, n2=1, n, t;
    
    
    cout<<"======================================================\n";
    cout<<"-----------------------Fibonacci----------------------\n";
    cout<<"======================================================\n";
    cout<<"Digite a quantidade de termos que deseja exibir: \n";
    cin>>t;
    cout<<"======================================================\n";
    cout<<n1<<" - "<<n2<<" - ";
    for (int i=0; i<=t;i++) {
       cout<< (n1+n2) <<" - ";
       n=n1;
       n1=n2;
       n2=n2+n;
    }
    cout<<"\n======================================================\n";
    
    return 0;
}
