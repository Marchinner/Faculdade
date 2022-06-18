#include <iostream>
#include <locale.h>

using namespace std;

void lerMatriz(int matriz[30][30]) {
    int linha, coluna;

    for(linha = 0; linha < 30; linha++) {
        for(coluna = 0; coluna < 30; coluna++) {
            cout << "Elemento [" << linha << "][" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }
}

int quantidadeNumero(int matriz[30][30], int numero) {
    int quantidade = 0, linha, coluna;

    for(linha = 0; linha < 30; linha++) {
        for(coluna = 0; coluna < 30; coluna++) {
            if(matriz[linha][coluna] == 0) {
                quantidade++;
            }
        }
    }

    return 0;
}

void modificaMatriz(int matrizA[30][30], int numero, int matrizB[30][30]) {
    int linha, coluna;

    for(linha = 0; linha < 30; linha++) {
        for(coluna = 0; coluna < 30; coluna++) {
            if(matrizA[linha][coluna] == numero) {
                matrizB[linha][coluna] = 0;
            } else {
                matrizB[linha][coluna] = matrizA[linha][coluna];
            }
        }
    }
}

void imprimeMatriz(int matriz[30][30]) {
    int linha, coluna;

    for(linha = 0; linha < 30; linha++) {
        for(coluna = 0; coluna < 30; coluna++) {
            cout << "Elemento [" << linha << "][" << coluna << "]: " << matriz[linha][coluna] << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matrizA[30][30], matrizB[30][30], numero, quantidade;

    cout << "Insira um número para comprar com a matriz: ";
    cin >> numero;

    lerMatriz(matrizA);

    quantidade = quantidadeNumero(matrizA, numero);

    modificaMatriz(matrizA, numero, matrizB);

    imprimeMatriz(matrizB);

    return 0;
}
