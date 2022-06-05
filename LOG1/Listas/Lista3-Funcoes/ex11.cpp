#include <iostream>
#include <locale.h>

using namespace std;

int verifica(int num) {
    int retorno;

    if(num > 0) {
        retorno = 1;
    } else if(num < 0) {
        retorno = 0;
    } else {
        retorno = -1;
    }

    return retorno;
}

int somaEntre(int num1, int num2) {
    int somaFinal = 0, somador;

    for(somador = num1; somador <= num2; somador++) {
        somaFinal += somador;
    }

    return somaFinal;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, continuar = 0;

    do {
        cout << "Insira o número 1: ";
        cin >> num1;

        if(verifica(num1) != 1) {
            continuar = 1;

            cout << "Número inválido!" << endl;
        } else {
            continuar = 0;
        }
    } while(continuar == 1);

    do {
        cout << "Insira o número 2: ";
        cin >> num2;

        if(verifica(num2) != 1) {
            continuar = 1;

            cout << "Número inválido!" << endl;
        } else {
            continuar = 0;
        }
    } while(continuar == 1);

    cout << "A soma de todos os números entre " << num1 << " e " << num2
        << " é igual à " << somaEntre(num1, num2) << endl;

    return 0;
}
