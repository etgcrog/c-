/*Faça um cadastro simples de clientes que  receba: nome, idade, cpf, altura e peso.
 Depois imprima uma frase para cada cliente com todos os seus dados.
 Utilize vetores e matrizes para elementos do mesmo tipo.*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 100

using namespace std;

char nome[TAM][50];
int cpf[TAM], idade[TAM];
float peso[TAM], altura[TAM];
int op;

void cadastro();
void pesquisar();
void listar();

int main(){
    do{
        system("clear"); // Se estiver no windows use 'cls'
        cout<<"-------------------------------";
        cout<<"\n        MENU DE CADASTRO\n1 - Cadastrar\n2 - Pesquisar\n3 - Listar\n4 - Sair"<<endl;
        cout<<"-------------------------------"<<endl;
        cin>>op;
        switch(op){
            case 1:
                cadastro();
                break;
            case 2:
                pesquisar();
                break;
            case 3:
                listar();
                break;
            case 4:
                system("exit");
                break;
            default:
                cout<<"Opção inválida, tente novamente!!!"<<endl;
                getchar();
                getchar();
                break;
        }
    }while(op!=4);
 }

void listar(){
    int i;
    for(i=0;i<TAM;i++){
        if(cpf[i] > 0){
        cout<<"\nNome: "<<nome[i]<<"\nCPF: "<<cpf[i]<<"\nIdade: "<<idade[i]<<
        "\nAltura: "<<altura[i]<<"\nPeso: "<<peso[i]<<endl;
    }else{
        break;
    }
  }
  getchar();
  getchar();
}


void cadastro(){
    static int linha;
    do{
        cout<<"Digite o nome: "<<endl;
        cin>>nome[linha];
        cout<<"Digite o cpf: "<<endl;
        cin>>cpf[linha];
        cout<<"Digite a idade: "<<endl;
        cin>>idade[linha];
        cout<<"Digite a altura: "<<endl;
        cin>>altura[linha];
        cout<<"Digite o peso: "<<endl;
        cin>>peso[linha];
        cout<<"Digite um 1 para continuar ou 0 para sair"<<endl;
        cin>>op;
        linha++;
    }while(op==1);
}

void pesquisar(){
    int cpfpesquisa;
    char nomepesquisa[50];
    int i;
    do{
        cout<<"Digite 1 para pesquisar por cpf, 2 para nome ou 0 para voltar ao menu: "<<endl;
        cin>>op;
        switch(op){
            case 1:
                cout<<"Digite o CPF para pesquisar: "<<endl;
                cin>>cpfpesquisa;
                for(i=0;i<TAM;i++){
                    if(cpf[i]==cpfpesquisa){
                        cout<<"\nNome: "<<nome[i]<<"\nCPF: "<<cpf[i]<<"\nIdade: "<<idade[i]<<
                        "\nAltura"<<altura[i]<<"\nPeso: "<<peso[i]<<endl;;
                    }
                }
                break;
            case 2:
                cout<<"Digite o nome para pesquisar: "<<endl;
                cin>>nomepesquisa;
                for(i=0;i<TAM;i++){
                    if(strcmp(nome[i], nomepesquisa) == 0){
                        cout<<"\nNome: "<<nome[i]<<"\nCPF: "<<cpf[i]<<"\nIdade: "<<idade[i]<<
                        "\nAltura: "<<altura[i]<<"\nPeso: "<<peso[i]<<endl;
                    }
                }
                break;
            case 0:
                main();
                break;
            default:
                cout<<"Opção Inválida!!!"<<endl;
                break;
        }
        cout<<"Digite 1 para continuar pesquisando..."<<endl;
        cin>>op;
    }while(op==1);
 }
