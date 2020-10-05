#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

void cabecalho(){
    cout<<"-------------------"<<endl;
    cout<<"SEQUÊNCIA FIBONACCI"<<endl;
    cout<<"-------------------"<<endl;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, i=0, j=1, k, cont;

    cabecalho();
    cout<<"Quantos termos você deseja ver da sequência?"<<endl;
    cin>>n;
    cout<<"----------------------"<<endl;

    cont=3;

    cout<<i<<endl;
    cout<<j<<endl;

    while(cont<=n){
        k = i+j;
        cout<<k<<endl;
        i=j;
        j=k;
        cont++;

    }
}
