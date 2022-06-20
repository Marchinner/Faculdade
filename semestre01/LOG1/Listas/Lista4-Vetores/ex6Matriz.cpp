#include <iostream>
#include <locale.h>

using namespace std;

void lerMatriz(int matriz[10][5]) {
    int linha, coluna;

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 5; coluna++) {
            cout << "Elemento [" << linha << "][" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }
}

void imprimirMatriz(int matriz[10][5]) {
    int linha, coluna;

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 5; coluna++) {
            cout << "[" << linha << "][" << coluna << "] = " << matriz[linha][coluna] << endl;
        }
    } 
}

void contarRepetidos(int matrizA[10][5], int matrizB[10][5]) {
    int linha, linhaAux, coluna, elemento, colunaAux, totalRepeticao;

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 5; coluna++) {
            matrizB[linha][coluna] = -1;
        }
    }

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 5; coluna++) {
            elemento = matrizA[linha][coluna];

            if(matrizB[linha][coluna] == -1) {
                totalRepeticao = 0;

                for(linhaAux = 0; linhaAux < 10; linhaAux++) {
                    for(colunaAux = 0; colunaAux < 5; colunaAux++) {
                        if(matrizA[linhaAux][colunaAux] == elemento) {
                            totalRepeticao++;
                            
                            matrizB[linhaAux][colunaAux] = 0;
                        }
                    }
                }

                matrizB[linha][coluna] = totalRepeticao;
            }
        }
    }
}

void imprimeRepetidos(int matrizA[10][5], int matrizB[10][5]) {
    int linha, coluna;

    for(linha = 0; linha < 10; linha++) {
        for(coluna = 0; coluna < 5; coluna++) {
            if(matrizB[linha][coluna] > 0) {
                cout << "O elemento [" << matrizA[linha][coluna] << "] aparece " << matrizB[linha][coluna] << " vezes " << endl;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matrizA[10][5], matrizB[10][5];

    lerMatriz(matrizA);

    imprimirMatriz(matrizA);

    contarRepetidos(matrizA, matrizB);

    imprimeRepetidos(matrizA, matrizB);

    return 0;
}
