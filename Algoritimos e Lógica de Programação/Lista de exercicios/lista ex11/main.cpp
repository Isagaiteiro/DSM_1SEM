#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale (LC_ALL,"Portuguese");
    
    int a[10][10], linha=0, coluna=0, valor=0;
    int maior=a[0][0];

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<"Digite um número\n";
            cin>>a[i][j];
            }
    }
    
    for (int i=0; i<9; i++){
        cout<< a[i][0]<<"|"<<a[i][1]<<"|"<<a[i][2]<<"|"<<a[i][3]<<"|"<<a[i][4]<<"|"<<a[i][5]<<"|"<<a[i][6]<<"|"<<a[i][7]<<"|"<<a[i][8]<<"|"<<a[i][9]<<"|"<<endl;
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if( a[i][j] > maior ){
            maior=a[i][j];
            linha = i;
            coluna = j;
            }
        }
    }
    cout<<"O maior número da matriz é "<< a[linha][coluna]<<".\n";
    cout<<"Localizado na posição a["<<linha<<"][" << coluna<<"]."<<endl;
    return 0;
}
