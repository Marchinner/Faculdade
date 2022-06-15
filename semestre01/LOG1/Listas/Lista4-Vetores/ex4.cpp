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

void multiplicarVetores(int vetorA[6], int vetorB[6]) {
    int contador;

    for(contador = 0; contador < 6; contador++) {
        vetorB[contador] *= vetorA[contador];

        cout << "VetorA[" << contador << "] x VetorB[" << contador << "] = " << vetorB[contador] << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[6], vetorB[6];

    lerVetor(vetorA);
    
    cout << endl << "VetorB" << endl;

    lerVetor(vetorB);

    multiplicarVetores(vetorA, vetorB);

    return 0;
}
