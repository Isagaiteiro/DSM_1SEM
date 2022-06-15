#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale (LC_ALL,"Portuguese");
    
    double trigo=1, soma=0;
    
    for (int i=1; i<=64; i++){
        soma=soma+trigo;
        trigo=trigo*2;
        cout<<soma<<endl;
    }

    return 0;
}
