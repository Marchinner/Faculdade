#include <iostream>
#include <locale.h>

using namespace std;

#define MAX 50

struct List {
    int code;
    string description;
    int quantity;
    int minQuantity;
    float price;
};

void read(List item[MAX]) {
    int counter;


    for(counter = 0; counter < MAX; counter++) { 
        cout << endl << "===== CADASTRO DO PRODUTO N°" << counter << " =====" << endl;

        cout << "Código: ";
        cin >> item[counter].code;

        cout << "Descrição: ";
        cin >> item[counter].description;

        cout << "Quantidade em estoque: ";
        cin >> item[counter].quantity;

        cout << "Quantidade mínima em estoque: ";
        cin >> item[counter].minQuantity;

        cout << "Preço: ";
        cin >> item[counter].price;
    }
}

void showLowQuantity(List item[MAX]) {
    int counter;

    cout << "===== PRODUTOS QUE ESTÃO ABAIXO DO MÍNIMO =====" << endl;

    for(counter = 0; counter < MAX; counter++) {

        if(item[counter].quantity < item[counter].minQuantity) {
            cout << "Descrição: " << endl <<
                item[counter].description << endl;

            cout << "Quantidade em estoque: " << item[counter].quantity << endl;

            cout << "Quantidade mínima: " << item[counter].minQuantity << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portguese");

    List item[MAX];

    read(item);

    showLowQuantity(item);

    return 0;
}
