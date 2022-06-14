#include <iostream>
#include <locale.h>

using namespace std;

void lerVetor(int vetor[15]) {
    int contador;

    for(contador = 0; contador < 15; contador++) {
        cout << "Elemento [" << contador << "]: ";
        cin >> vetor[contador];
    }
}

void verificar(int vetor[15]) {
    int contador;

    cout << "Existe um elemento com valor 30 nas posições: " << endl;

    for(contador = 0; contador < 15; contador++) {
        if(vetor[contador] == 30) {
            cout << "Posição [" << contador << "]" << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[15];

    lerVetor(vetor);

    verificar(vetor);

    return 0;
}
