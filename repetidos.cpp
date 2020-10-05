#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int tam;
    cout<<"Qual é o tamanho do vetor:"<<endl;
    cin>>tam;
    int i, x, vetor[tam], c=0;


    for(i=0;i<tam;i++){
        cout<<"Digite o valor da posição: "<<i+1<<endl;
        cin>>vetor[i];

    }
    for(i=0;i<tam;i++){
        for(x=i+1;x<tam;x++){
            if(vetor[i]==vetor[x]){
                cout<<"O valor "<<vetor[i]<<" se repete!"<<endl;

      }else{c=c+1;}
  }if(c==45){cout<<"Nenhum valor se Repete!"<<endl;}
  }
}
