#include <iostream>
#include <locale.h>

using namespace std;

void lerVetor(int vetor[10]) {
    int contador;

    for(contador = 0; contador < 10; contador++) {
        cout << "Elemento [" << contador << "]: ";
        cin >> vetor[contador];
    }
}

void verMaior(int vetor[10]) {
    int contador, maiorElemento, valorElemento=0;

    for(contador = 0; contador < 10; contador++) {
        if(vetor[contador] > valorElemento) {
            maiorElemento = contador;

            valorElemento = vetor[contador];
        }
    }

    cout << "O menor elemento do vetor tem valor = " << valorElemento << " e está na posição [" << maiorElemento << "]" << endl;
}

void verMenor(int vetor[10]) {
    int contador, menorElemento, valorElemento=0;

    for(contador = 0; contador < 10; contador++) {
        if(vetor[contador] > valorElemento) {
            menorElemento = contador;

            valorElemento = vetor[contador];
        }
    }
    cout << "O maior elemento do vetor tem valor = " << valorElemento << " e está na posição [" << menorElemento << "]" << endl;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[10];

    lerVetor(vetor);

    verMaior(vetor);

    verMenor(vetor);

    return 0;
}
