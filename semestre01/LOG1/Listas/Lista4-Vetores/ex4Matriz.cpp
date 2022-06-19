#include <iostream>
#include <locale.h>

using namespace std;

void lerMatriz(int matriz[20][15]) {
    int linha, coluna;

    for(linha = 0; linha < 20; linha++) {
        for(coluna = 0; coluna < 15; coluna++) {
            cout << "Elemento [" << linha << "][" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }
}

int somaLinhas(int matriz[20][15]) {
    int resultado = 0, linha, coluna;

    for(linha = 1; linha <= 20; linha++) {
        for(coluna = 0; coluna < 15; coluna++) {
            resultado += matriz[linha][coluna];
        }
    }

    return resultado;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[20][15], resultado;

    lerMatriz(matriz);

    resultado = somaLinhas(matriz);

    cout << "A soma das linhas ímpares da matriz é = " << resultado << endl;

    return 0;
}
