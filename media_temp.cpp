/*Crie um programa que receba a temperatura média de cada mês
do ano e armazene-as em um vetor. Após isto, calcule a
média anual das temperaturas e mostre todas as temperaturas
acima da média anual, e em que mês elas ocorreram
(mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . )*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    float temp[12], limpa=0;
    float soma, media;
    string mes[12] = {"Janeiro","Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};


    for(i=0;i<12;i++){
            cout<<"Digite a média de temperatura do mês de "<<mes[i]<<":"<<endl;
            temp[i]=limpa;
            cin>>temp[i];
            soma = soma + temp[i];
            media = soma/12;
            }
    cout<<"A média anual de temperatura é igual: "<<media<<endl;

    for(i=0;i<12;i++){
        if(temp[i] > media){
            cout<<"A temperatura no mês de "<< mes[i]<<" é superior a média de "<<media<<" atingindo "<< temp[i]<<" graus"<<endl;
        }
    }
}
