#include <iostream>
#include <locale.h>
#include <ostream>

using namespace std;

float Somar(float num1, float num2) {
    float resultado = num1 + num2;

    return resultado;
}

float Subtrair(float num1, float num2) {
    float resultado = num1 - num2;

    return resultado;
}

float Multiplicar(float num1, float num2) {
    float resultado = num1 * num2;

    return resultado;
}

float Dividir(float num1, float num2) {
    float resultado = num1 / num2;

    return resultado;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;
    int opcao;

    cout << "Insira o número 1: ";
    cin >> num1;

    cout << "Insira o número 2: ";
    cin >> num2;

    cout << "----------------------------------------" << endl
        << "Escolha uma opção:" << endl
        << "1 - somar" << endl
        << "2 - subtrair" << endl
        << "3 - multiplicar" << endl
        << "4 - dividir" << endl
        << "----------------------------------------" << endl
        << "Sua escolha: ";

    cin >> opcao;

    if(opcao == 1) {
        cout << num1 << " + " << num2 << " = " << Somar(num1, num2) << endl;
    } else if(opcao == 2) {
        cout << num1 << " - " << num2 << " = " << Subtrair(num1, num2) << endl;
    } else if(opcao == 3) {
        cout << num1 << " x " << num2 << " = " << Multiplicar(num1, num2) << endl;
    } else if(opcao == 4) {
        cout << num1 << " / " << num2 << " = " << Dividir(num1, num2) << endl;
    } else {
        cout << "Opção inválida!";
    }
}
