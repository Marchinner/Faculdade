#include <iostream>
#include <locale.h>

using namespace std;

void lerMatriz(int matriz[10][10]) {
    int linha, coluna;

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 10; coluna++) {
            cout << "Elemento [" << linha << "][" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }
}

void multiplicaElementos(int matriz[10][10], int vetor[10]) {
    int linha, coluna, valorLinha = 0;

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 10; coluna++) {
            valorLinha += matriz[linha][coluna];
        }

        vetor[linha] = valorLinha * matriz[linha][linha];

        valorLinha = 0;
    }
}

void imprimeVetor(int vetor[10]) {
    int contador;

    cout << "===== RESULTADO DA MULTIPLICAÇÃO DA LINHA PELO ELEMENTO DA DIAGONAL PRINCIPAL DA LINHA =====" << endl;

    for(contador = 0; contador < 10; contador++) {
        cout << "Resultado [" << contador << "] = " << vetor[contador] << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[10][10], vetor[10];

    lerMatriz(matriz);

    multiplicaElementos(matriz, vetor);

    imprimeVetor(vetor);

    return 0;
}
