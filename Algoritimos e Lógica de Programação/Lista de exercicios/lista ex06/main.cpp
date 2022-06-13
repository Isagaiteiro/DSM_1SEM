#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv){
    setlocale (LC_ALL,"Portuguese");
    
    int idade, qnt;
    float peso;
    
    cout<<"==================================\n";
    cout<<"--------------Farmácia------------\n";
    cout<<"==================================\n";
    cout<<"Insira a sua idade: \n";
    cin>>idade;
    cout<<"Insira o seu peso: \n";
    cin>>peso;
    cout<<"==================================\n";
    if (idade>=12){
        if(peso>=60.0){
            qnt=1000/25;
            cout<<"Você deve tomar 1000mg ( "<<qnt<<" gotas ).\n";
            cout<<"==================================\n";
        } else {
            qnt=875/25;
            cout<<"Você deve tomar 875mg ( "<<qnt<<" gotas ).\n";
            cout<<"==================================\n";
        }
        
    } else {
        if (peso>=5.0 and peso<=9.0){
            qnt=125/25;
            cout<<"Você deve tomar 125mg ( "<<qnt<<" gotas ).\n";
            cout<<"==================================\n";
        }    
        if (peso>=9.1 and peso<=16.0) {
            qnt=250/25;
            cout<<"Você deve tomar 250mg ( "<<qnt<<" gotas ).\n";
            cout<<"==================================\n";
        }
        if (peso>=16.1 and peso<=24.0) {
            qnt=375/25;
            cout<<"Você deve tomar 375mg ( "<<qnt<<" gotas ).\n";
            cout<<"==================================\n";
        }
        if (peso>=24.1 and peso<=30){
            qnt=500/25;
            cout<<"Você deve tomar 500mg ( "<<qnt<<" gotas ).\n";
            cout<<"==================================\n";
        }     
        if (peso>=30.1){
            qnt=750/25;
            cout<<"Você deve tomar 750mg ( "<<qnt<<" gotas ).\n";
            cout<<"==================================\n";
        }
    }
    return 0;
}
