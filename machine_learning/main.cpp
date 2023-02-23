#include <iostream>
#include <fstream>  // manipulacao de arquivo
#include <chrono>  // Contar o tempo de processamento
#include <vector> // Pacote para operacoes com vetores
#include <numeric>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;
using namespace chrono;

const int startTest = 900;
const int numOfInteractios = 5;


int main()
{
    string filePath = "data/dataset.csv";

    ifstream inputFile;

    inputFile.open(filePath);

    if (!inputFile.is_open()){
        cout << "Falha ao abrir o arquivo " << endl;
        return 0;
    }

    // variaveis para o tratamento
    double id_tmp;
    double tipo_doc_tmp;
    double classe_tmp;
    double certificado_valido_tmp;
    double uso_dias_tmp;

    vector<double> id;
    vector<double> tipo_doc;
    vector<double> classe;
    vector<double> certificado_valido;
    vector<double> uso_dias;

    string header;

    string cell;

    //pega uma linha
    getline(inputFile, header);

    while(inputFile.good()){

        getline(inputFile, cell, ',');

        //limpando aspas do ID
        cell.erase(remove(cell.begin(), cell.end(), '\"'), cell.end());

        if (!cell.empty()){
            //convert string para double
            id_tmp = stod(cell);
            id.push_back(id_tmp);

            getline(inputFile, cell, ',');
            tipo_doc_tmp = stod(cell);
            tipo_doc.push_back(tipo_doc_tmp);

            getline(inputFile, cell, ',');
            classe_tmp = stod(cell);
            classe.push_back(classe_tmp);

            getline(inputFile, cell, ',');
            certificado_valido_tmp = stod(cell);
            certificado_valido.push_back(certificado_valido_tmp);

            getline(inputFile, cell, ',');
            uso_dias_tmp = stod(cell);
            uso_dias.push_back(uso_dias_tmp);

        }else{
            break;
        }
    }
    //Dados de treino
    vector<double> tipodoc_train;

    for (int i=0; i<startTest; i++){
        tipodoc_train.push_back(tipo_doc.at(i));
    }

    vector<double> classe_train;

    for (int i=0; i<startTest; i++){
        classe_train.push_back(tipo_doc.at(i));
    }

    vector<double> certificado_valido_train;

    for (int i=0; i<startTest; i++){
        certificado_valido_train.push_back(certificado_valido.at(i));
    }

    vector<double> uso_dias_train;

    for (int i=0; i<startTest; i++){
        uso_dias_train.push_back(uso_dias.at(i));
    }

    // Dados de teste

    vector<double> tipodoc_test;

    for (int i=startTest; i<id.size(); i++){
        tipodoc_test.push_back(tipo_doc.at(i));
    }

    vector<double> classe_test;

    for (int i=startTest; i<id.size(); i++){
        classe_test.push_back(classe.at(i));
    }

    vector<double> certificado_valido_test;

    for (int i=startTest; i<id.size(); i++){
        certificado_valido_test.push_back(certificado_valido.at(i));
    }

    vector<double> uso_dias_test;

    for (int i=startTest; i<id.size(); i++){
        uso_dias_test.push_back(uso_dias.at(i));
    }

}
