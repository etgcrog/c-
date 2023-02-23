#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int empty_array[3] = {};
    int array[3] = {1, 2, 3};

    printf("Conteudo do array\n");

    cout<< array<< endl;

    for (int i = 0; i< 3; i++){
        cout<< array[i] << "\n";
    }

    cout<<"\nEndereco do array"<< &array << endl;

    int *ptr = array;

    cout<< *ptr<< "\n";

    cout<<"\nImprindo o array"<<endl;
    for (int i=0;i<3;i++){
        cout<< *ptr << " ";
        ptr++;
    }

    cout<<"\nTamanho do Array:" << "\n";
    cout<< sizeof(array) / sizeof(*array) << endl;

    cout<<empty_array<<'\n';

    empty_array[0] = 0;
    empty_array[1] = 1;
    empty_array[2] = 2;

    int tam = sizeof(empty_array)/sizeof(*empty_array);

    for (int j=0;j<tam;j++){
        cout<< empty_array[j] << " ";
    }

    return 0;
}