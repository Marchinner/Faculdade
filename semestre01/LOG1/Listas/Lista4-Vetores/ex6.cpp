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

void imprimirVetor(int vetorA[10]) {
    int contador;

    for(contador = 0 ; contador < 10; contador++) {
        cout << "Valor [" << contador << "]: " << vetorA[contador] << endl;
    }
}

void inverterVetor(int vetorA[10], int vetorB[10]) {
    int contador;

    for(contador = 0; contador < 10; contador++) {
        vetorB[9 - contador] = vetorA[contador];
    }
}

int somarVetor(int vetorA[10]) {
    int contador, soma;
    for(contador = 0; contador < 10; contador++) {
        soma += vetorA[contador];
    }

    return soma;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int x[10], y[10];

    lerVetor(x);

    inverterVetor(x, y);

    imprimirVetor(y);

    cout << endl << "Soma do vetor: " << somarVetor(x) << endl;

    return 0;
}
