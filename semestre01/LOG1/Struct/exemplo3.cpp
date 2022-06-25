#include <iostream>
#include <locale.h>

using namespace std;

struct Mercadoria {
    string nome;
    float precoUnitario, precoTotal;
    int quantidade;
};

void lerCompra(Mercadoria produto[10]) {
    int contador;

    for(contador = 0; contador < 10; contador++) {
        cout << "================ PRODUTO " << contador + 1 << " ===============" << endl;

        cout << "Nome: ";
        cin >> produto[contador].nome;

        cout << "Preço Unitário: ";
        cin >> produto[contador].precoUnitario;

        cout << "quantidade: ";
        cin >> produto[contador].quantidade;

        cout << "==========================================" << endl;

        produto[contador].precoTotal = produto[contador].quantidade * produto[contador].precoUnitario;
    }
}

float calcularCompra(Mercadoria produto[10]) {
    int contador;
    float precoFinal = 0;

    for(contador = 0; contador < 10; contador++) {
        precoFinal += produto[contador].precoTotal; 
    }

    return precoFinal;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int precoFinal;

    Mercadoria produto[10];

    lerCompra(produto);

    calcularCompra(produto);

    cout << "Preço final da compra: " << calcularCompra(produto);

    return 0;
}
