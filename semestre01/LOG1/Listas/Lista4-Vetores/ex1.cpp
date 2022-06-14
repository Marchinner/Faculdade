#include <iostream>
#include <locale.h>

using namespace std;

void lerVetor(int vetor[6]) {
    int contador;

    for(contador = 0; contador < 6; contador++) {
        cout << "Elemento [" << contador << "]: ";
        cin >> vetor[contador];
    }
}

int contarPares(int vetor[6]) {
    int contador, quantidade=0;

    for(contador = 0; contador < 6; contador++) {
        if(vetor[contador] % 2 == 0) {
            quantidade++;
        }
    }

    return quantidade;
}

void mostraPar(int vetor[6]) {
    int contador;

    for(contador = 0; contador < 6; contador++) {
        if(vetor[contador] % 2 == 0) {
            cout << "O elemento [" << vetor[contador] << "] é PAR!" << endl;
        }
    }

}

int contarImpar(int vetor[6]) {
    int contador, quantidade=0;

    for(contador = 0; contador < 6; contador++) {
        if(vetor[contador] % 2 != 0) {
            quantidade++;
        }
    }

    return quantidade;
}

void mostraImpar(int vetor[6]) {
    int contador;

    for(contador = 0; contador < 6; contador++) {
        if(vetor[contador] % 2 != 0) {
            cout << "O elemento [" << vetor[contador] << "] é IMPAR!" << endl;
        }
    }

}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[6];

    lerVetor(vetor);
    
    cout << "Este vetor tem " << contarPares(vetor) << " números PARES" << endl;

    mostraPar(vetor);

    cout << "Este vetor tem " << contarImpar(vetor) << " números ÍMPARES" << endl;

    mostraImpar(vetor);

}
