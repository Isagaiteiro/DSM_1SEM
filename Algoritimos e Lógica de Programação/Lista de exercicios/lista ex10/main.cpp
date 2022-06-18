#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale (LC_ALL,"Portuguese");
    
    int a[10];
    int n=0;
    
    while (n <9) {
        cout<<"Digite um número: \n";
        cin>> a[n];
        n++;
    }
    
    for (int j=0; j<9; j++) {
        for (int i = 0; i < 9; i++) {
          if (a[i] > a[i+1]) {
             int temp = a[i];
             a[i] = a[i+1];
             a[i+1] = temp;
          }
        }
    }
    cout<<"=======================================\n";
    for (int i=0; i < 9; i++){
        cout << a[i] << " | ";
    }
    cout<<"\n=======================================\n";

    return 0;
}
