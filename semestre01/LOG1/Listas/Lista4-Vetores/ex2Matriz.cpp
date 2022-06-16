#include <iostream>
#include <locale.h>

using namespace std;

void lerMatriz(int matriz[6][6]) {
    int linha, coluna;

    for(linha = 0; linha < 6; linha++) {
        for(coluna = 0; coluna < 6; coluna++) {
            cout << "Elemento [" << linha << "]" << "[" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }
}

int lerValor(int valor) {
    cout << "Insira um valor para multiplicar os elementos da matriz: ";
    cin >> valor;

    return valor;
}

void multiplica(int matriz[6][6], int valor, int vetor[36]) {
    int multiplicador = 0, linha, coluna;

    for(linha = 0; linha < 6; linha++) {
        for(coluna = 0; coluna < 6; coluna++) {
            vetor[coluna + multiplicador] = matriz[linha][coluna] * valor;
        }
        multiplicador += 6;
    }
}

void imprimeVetor(int vetor[36]) {
    int contador;

    for(contador = 0; contador < 36; contador++) {
        cout << "[" << contador << "] = " << vetor[contador] << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[6][6], valor, vetor[36];

    lerMatriz(matriz);

    valor = lerValor(valor);

    multiplica(matriz, valor, vetor);

    imprimeVetor(vetor);
}
