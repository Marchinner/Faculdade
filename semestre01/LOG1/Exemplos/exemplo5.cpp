#include <iostream>
#include <locale.h>

using namespace std;

void lerMatriz(int matrizA[6][4]) {
    int linha, coluna;

    for(linha = 0; linha < 6; linha++) {
        for(coluna = 0; coluna < 4; coluna++) {
            cout << "Elemento [" << linha << "] [" << coluna << "]: ";
            cin >> matrizA[linha][coluna];
        }
    }
}

int maiorQueTrinta(int matrizA[6][4]) {
    int linha, coluna, quantidade = 0;

    for(linha = 0; linha < 6; linha++) {
        for(coluna = 0; coluna < 4; coluna++) {
            if(matrizA[linha][coluna] > 30) {
                quantidade++;
            }
        }
    }

    return quantidade;
}

void montarMatriz(int matrizA[6][4], int matrizB[6][4]) {
    int linha, coluna;

    for(linha = 0; linha < 6; linha++) {
        for(coluna = 0; coluna < 4; coluna++) {
            if(matrizA[linha][coluna] != 30) {
                matrizB[linha][coluna] = matrizA[linha][coluna];
            } else {
                matrizB[linha][coluna] = 0;
            }
        }
    }
}

void imprimirMatriz(int matrizB[6][4]) {
    int linha, coluna;

    for(linha = 0; linha < 6; linha++) {
        for(coluna = 0; coluna < 4; coluna++) {
            cout << matrizB[linha][coluna] << " ";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matrizA[6][4], matrizB[6][4];
    
    lerMatriz(matrizA);

    cout << "A matriz contém " << maiorQueTrinta(matrizA) << " elementos maiores que 30!" << endl;

    montarMatriz(matrizA, matrizB);

    imprimirMatriz(matrizB);

    return 0;
}
