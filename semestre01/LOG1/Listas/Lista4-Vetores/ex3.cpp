#include <iostream>
#include <locale.h>

using namespace std;

void lerVetor(int vetorA[10]) {
    int contador;

    for(contador = 0; contador < 10; contador++) {
        cout << "Elemento [" << contador << "]: ";
        cin >> vetorA[contador];
    }
}

int lerInteiro(int numero) {
    cout << "Insira um número que irá multiplicar todos os elementos do vetor: ";
    cin >> numero;

    return numero;
}

void multiplicar(int vetorA[10], int numero, int vetorM[10]) {
    int contador;

    for(contador = 0; contador < 10; contador++) {
        vetorM[contador] = vetorA[contador] * numero;
    }
}

void imprimirVetor(int vetorM[10]) {
    int contador;
    
    cout << "IMPRIMINDO VETOR M" << endl;

    for(contador = 0; contador < 10; contador++) {
        cout << "Elemento [" << contador << "] = " << vetorM[contador] << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[10], vetorM[10], numero;

    lerVetor(vetorA);

    numero = lerInteiro(numero);

    multiplicar(vetorA, numero, vetorM);

    imprimirVetor(vetorM);

    return 0;
}
