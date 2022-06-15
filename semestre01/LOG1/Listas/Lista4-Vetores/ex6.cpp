#include <iostream>
#include <locale.h>

using namespace std;

void lerVetor(int vetorA[10]) {
    int contador;

    for(contador = 0 ; contador < 10; contador++) {
        cout << "Digite o valor [" << contador << "]: ";
        cin >> vetorA[contador];
    }
}

void imprimirVetor(int vetorB[10]) {
    int contador;

    for(contador = 0 ; contador < 10; contador++) {
        cout << "Valor [" << contador << "]: " << vetorB[contador] << endl;
    }
}

void inverterVetor(int vetorA[10], int vetorB[10]) {
    int contador;

    for(contador = 0; contador < 10; contador++) {
        vetorB[9 - contador] = vetorA[contador];
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int x[10], y[10];

    lerVetor(x);

    inverterVetor(x, y);

    imprimirVetor(y);

    return 0;
}
